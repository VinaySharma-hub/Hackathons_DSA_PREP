#include<iostream>
using namespace std;
class node{
    public:
    node* left;
    node* right;
    int val;
    node(int value){
        this->left=NULL;
        this->right=NULL;
        this->val=value;
    }
};
node* lowestCommonAncestor(node* root, node* p,node* q) {
        while(root) {
            if(p->val > root->val && q->val > root->val) {
                root = root->right;
            } else if(q->val < root->val && p->val < root->val) {
                root = root->left;
            } else {
                return root;
            }
        }
        return root;
    }


// creating bst
node* insertIntoBst(node* &root,int data){
    if(root==NULL){
        root=new node(data);
        return root;
    }
    // its not the first node 
    if(data>root->val){
        root->right=insertIntoBst(root->right,data);
    }
    else{
        root->left=insertIntoBst(root->left,data);
    }
    return root ;
}
void createBST(node* &root){
    cout<<"enter data"<<endl;
    int datas;
    cin>>datas;
    while(datas!=-1){
        insertIntoBst(root,datas);
        cin>>datas;
    }
}

// convert the bst into doubly linked list 
// tree left as the prev and tree right as the next

void createbsttodll(node* root, node* &head){
    if(root==NULL){
        return;
    }
    //RNL
    //R
    createbsttodll(root->right,head);
    //N
    root->right=head;
    if(head!=NULL)head->left=root;
    head=root;
    //L
    createbsttodll(root->left,head);
}

// very important as we move from root to the last node of the binary search tree
// then we call everytime left recursion so that it move to the left part of the binary search tree 
// this is very general practice in the field of recursion
// what we did is moving to the right most then moving the left part one by one of it 



int main(){
    node* root=NULL;
    createBST(root);
    node* bro =lowestCommonAncestor(root);
    cout<<bro->val;
    
    
}