#include<iostream>
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
int main(){0
    node* root = createtree();
    cout<<"levelordertraversal";
    levelordertraversal(root);
}