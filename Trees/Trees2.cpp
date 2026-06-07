#include<iostream>
#include<vector>
#include<map>
#include<queue>
using namespace std;
class node {
    public: 
    node* left;
    node* right;
    int value; 
    node(int val){
        this->value=val;
        this->left=NULL;
        this->right=NULL;
    } 
};
node* createtree(){
    int data;
    cout<<"enter the data";
    cin>>data;
    if(data==-1){ // -1 for adding nothing in the tree node 
        return NULL;
    }
    // create node  
    node* root =new node(data);
    //creating the left subtreee
    //left node data 
    root->left=createtree();
    // creating the right subtree
    //right node data
    root->right=createtree();
    return root;
}
int height(node* root){
if(root==NULL){
    return 0;
}
int leftheight=height(root->left);
int rightheight=height(root->right);
int finalans=max(leftheight,rightheight)+1;

return finalans;
}





// Balanced tree :- height of left subtree and right subtree at every node is less than 1 



bool balancedtree(node* root ){
if(root==NULL){
    return true;
}
if(height(root->left) > height(root->right) >1){
    return false ;
}
balancedtree(root->left);
balancedtree(root->right);
return true;

}



///  Left View of the Binary Tree 
void leftview(node* root,int level, vector<int>&r){
if(root==NULL){
    return;
}
int n=r.size();
if(n==level){
r.push_back(root->value);
}


/// both will give right view and left view if root->left is first => left view and if right view is first then right view ;;;;
leftview(root->right,level+1,r);
leftview(root->left,level+1,r);
}



// top view of the binary treee




void printtopview(node* root){
    map<int,int>hdtoNodemap;
    queue<pair<node*,int> >q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<node*,int> temp=q.front();
        q.pop();

        node* frontnode=temp.first;
        int hd=temp.second;


        // if there is no entry for hd in map , 
        // then create a new entry in the map
        if(hdtoNodemap.find(hd)==hdtoNodemap.end()){
        hdtoNodemap[hd]=frontnode->value;
    }
    // child ko dekhna hai ab 
    if(frontnode->left!=NULL){
        q.push(make_pair(frontnode->left,hd-1));
    }
    if(frontnode->right!=NULL){
        q.push(make_pair(frontnode->right,hd+1));
    }
    }
    cout<<"printing top view"<<endl;
    for(auto i:hdtoNodemap){
        cout<<i.second<<" ";


    }


}


// bottom view of the binary tree


void printbottomview(node* root){
    map<int,int>hdtoNodemap;
    queue<pair<node*,int> >q;
    q.push(make_pair(root,0));
    while(!q.empty()){
        pair<node*,int> temp=q.front();
        q.pop();

        node* frontnode=temp.first;
        int hd=temp.second;


//overwriting the hd to get the correct form of it 
        // then create a new entry in the map
       
        hdtoNodemap[hd]=frontnode->value;
    // child ko dekhna hai ab 
    if(frontnode->left!=NULL){
        q.push(make_pair(frontnode->left,hd-1));
    }
    if(frontnode->right!=NULL){
        q.push(make_pair(frontnode->right,hd+1));
    }
    }
    cout<<"printing bottom view";
    for(auto i:hdtoNodemap){
        cout<<i.second<<" ";
    }
}

/// boundary Traversal 

// left boundary 

void leftboundary(node* root, vector<int>& ans) {
    if (root == NULL) return;
    if (root->left) {
        ans.push_back(root->value);
        leftboundary(root->left, ans);
    }
    else if (root->right) {
        ans.push_back(root->value);
        leftboundary(root->right, ans);
    }
}

// leaf boundary 
void deepboundary(node* root, vector<int>& ans){
     if ( root==NULL) {
         return;
     }
     if (root->left==NULL && root->right==NULL ) {
        ans.push_back(root->value);
     }
     deepboundary(root->left, ans);
     deepboundary(root->right, ans);
}

// right boundary 


void rightboundary(node* root, vector<int>& ans) {
    if (root == NULL) return;
    root=root->right;
    if (root->right){
        ans.push_back(root->value);
       rightboundary(root->right,ans);
    }
    else if (root->left) {
        ans.push_back(root->value);
        leftboundary(root->left,ans);
    }
    int n = ans.size();
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
}

// main function 


int main(){
    node* root = createtree();
    // bool vinay = balancedtree(root);
    // cout<<vinay; // whether it is balddanced or not
    // vector<int>ans;
    // leftview(root,0,ans);
    // for(int i =0;i<ans.size();i++){
    //     cout<<ans[i];
    //     cout<<endl;
    // }
    // printtopview(root);
    // printbottomview(root);
    vector<int>result;
    leftboundary(root,result);
    deepboundary(root,result);
    rightboundary(root,result);
}