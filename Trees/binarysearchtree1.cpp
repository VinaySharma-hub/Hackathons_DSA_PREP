#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int value;
    node* left ;
    node*right;
    node(int val){
        this->left=NULL;
        this->right=NULL;
        this->value=val;
    }
};
node* insertIntoBst(node* &root,int data){
    if(root==NULL){
        root=new node(data);
        return root;
    }
    // its not the first node 
    if(data>root->value){
        root->right=insertIntoBst(root->right,data);
    }
    else{
        root->left=insertIntoBst(root->left,data);
    }
    return root ;
}
void levelOrdertraversal(node* root){
    if(root==NULL){
        return ;
    }
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp =q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->value<<" ";
            if(temp->left!=NULL){
                q.push(temp->left);
            }
            if(temp->right!=NULL){
                q.push(temp->right);
            }

                }
            }

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
void Preordertraversal(node* &root){
// NLR
if(root==NULL){
    return;
}
cout<<root->value<<" ";
Preordertraversal(root->left);
Preordertraversal(root->right);
}

void inordertraveresal(node* &root){
    //LNR
    if(root==NULL){
        return ;
    }
    inordertraveresal(root->left);
    cout<<root->value;
    inordertraveresal(root->right);
}
void postordertraveresal(node* root){
    //LRN
    if(root==NULL){
        return;
    }
    postordertraveresal(root->left);
    postordertraveresal(root->right);
    cout<<root->value;
}
// minimum value of last node
void minimum(node* root){
if(root==NULL){
    return;
}
while(root->left!=NULL){
    root=root->left;
}
cout<<"smallest value is ";
cout<<root->value;
} 

// returning the last node
node* minValue(node* root) {
	if(root == NULL) {
		cout << "NO MIN VALUE" << endl;
		return NULL; 
	}
	node* temp = root;

	while(temp->left != NULL) {
		temp = temp->left;
	}
	return temp;
}

// Maximum value 
void maximum(node* root){
if(root==NULL){
    return;
}
while(root->right!=NULL){
    root=root->right;
}
cout<<"maximum value is ";
cout<<root->value;
} 

// Searchign in the Tree
bool SearchinTree(node* root,int target){
    if(root==NULL){
        return ;
    }
    if(root->value==target){
        return true;
    }
    bool leftans=false;
    bool rightans=false;
    if(target>root->value){
        rightans=SearchinTree(root->right,target);
    }
    else{
        leftans=SearchinTree(root->left,target);
    }
    return rightans || leftans;
    
}


// deleting from the bst 

// yet to complete this  
node* deleteFromBST(node* root, int target) {
	///target ko dhundo
	//target ko delete karo
	if(root == NULL) {
		return NULL;
	}

	if(root->value== target) {
		//ab delete karenge
		//4 cases
		if(root->left == NULL && root->right == NULL) {
			//1 case -> leaf node
			delete root;
			return NULL;
		}
		else if(root->left != NULL && root->right == NULL) {
			//2 case -> left non null and right null
			node* childSubtree = root->left;
			delete root;
			return childSubtree;
		}
		else if(root->left == NULL && root->right != NULL) {
			///3 case -> left me NULL and right NON NULL
			node* childSubtree = root->right;
			delete root;
			return childSubtree;
		}
		//4 case -> left NON NULL && right NON NULL
		else {
			//a -> left subtree ki max value lao
			node* maxi = maximum(root->left);
			//replacement
			root->value = maxi->value;

			//delete actual maxi wali node
			root->left = deleteFromBST(root->left, maxi->data);
			return root;
		}
	}
	else if(root->value > target) {
		//left me chalo
		root->left =  deleteFromBST(root->left,  target);
	}
	else {
		//right me jao
		root->right =  deleteFromBST(root->right, target);
	}
	
	return root;
}

// bst form inorder 
Node* bstFromInorder(int inorder[], int s, int e) {
	//base case
	if(s > e) {
		return NULL;
	}

	//1 case solve krna h 
	int mid = (s+e)/2;
	int element  = inorder[mid];
	Node* root = new Node(element);

	//baaaaki recursion
	root->left = bstFromInorder(inorder, s, mid-1);
	root->right = bstFromInorder(inorder, mid+1, e);

	return root;
}

int main(){
    node* root=NULL;
    createBST(root);
    cout<<"levelordertraversal";
    levelOrdertraversal(root);
    cout<<"preordertraversal";
    Preordertraversal(root);
    cout<<"inordertraversal";
    inordertraveresal(root);
    cout<<"posttraversal";
    postordertraveresal(root);
    cout<<"minimum_value";
    minimum(root);
    minValue(root);
    cout<<"maximum_value";
    maximum(root);
    int target=25;
    bool ans=SearchinTree(root,target);
    deleteFromBST(root,35);
    return 0;

}