#include<iostream>
#include<queue>
#include<algorithm>
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
    node * root =new node(data);
    //creating the left subtreee
    //left node data 
    root->left=createtree();
    // creating the right subtree
    //right node data
    root->right=createtree();
    return root;
}


void preordertraversal(node* root){
    if(root==NULL){
        return ;
    }
    // N L R
    //value of the node data 
    cout<<root->value;
    if(root)
    // left node
    preordertraversal(root->left);
    preordertraversal(root->right);
}
void postordertraversal(node* root){
if(root==NULL){
    return;
}
postordertraversal(root->left);
postordertraversal(root->right);
cout<<root->value<<"->";
}

void inordertraversal(node* root){
    if(root==NULL){
        return;
    }
    inordertraversal(root->left);
    cout<<root->value<<"->";
    inordertraversal(root->right);
}

void levelordertraversal(node* root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    // will start traversal 
    while(q.size()>1){
        node* front=q.front();
        q.pop();
        if(front==NULL){
            cout<<endl;
             q.push(NULL);        
        }
        else {   
        cout<<front->value<<" ";
        if(front->left!=NULL){
            q.push(front->left);
        }
        if(front->right!=NULL){
            q.push(front->right);
        }
        }
    }
}

// Height of the tree
int height(node* root) {
	//base case
	if(root == NULL ) {
		return 0;
	}
    int heigh;
    heigh= 1+max(height(root->left),height(root->right));
	return heigh;
}

// main function :-
int main(){
    node* root = createtree();
    cout<<"printing preorder";
    preordertraversal(root);
    cout<<endl;
    cout<<"printing inorder";
    inordertraversal(root);
    cout<<endl;
    cout<<"postordertraversal";
    postordertraversal(root);
    cout<<endl;
    cout<<"levelordertraversal";
    levelordertraversal(root);
    cout<<endl;
    height(root);
}
