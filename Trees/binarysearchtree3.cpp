#include<iostream>
#include<vector>
using namespace std;
class TreeNode{
    public: 
    int val;
    TreeNode* left;
    TreeNode* right;
   TreeNode(int value){
        this->left=NULL;
        this->right=NULL;
        this->val=value;
    }
};


// deleting the node in the binary search tree 

TreeNode* deleteNode(TreeNode* root, int key) {
        if (!root) return nullptr;

        if (key < root->val) {
            root->left = deleteNode(root->left, key);
        } 
        else if (key > root->val) {
            root->right = deleteNode(root->right, key);
        } 
        else {
            // Node found
            if (!root->left && !root->right) {      // No child
                delete root;
                return nullptr;
            }
            else if (!root->left) {                // Only right child
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }
            else if (!root->right) {               // Only left child
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }
            else {                                 // Two children
                TreeNode* succ = findMin(root->right);
                root->val = succ->val;
                root->right = deleteNode(root->right, succ->val);
            }
        }
        return root;
    }

TreeNode* findMin(TreeNode* node) {
        while (node && node->left)
            node = node->left;
        return node;
    }




// code for the kth smallest element 

 int count = 0;
    int ans   = -1;

    void inorder(TreeNode* root, int k) {
        if (!root || ans != -1) return; // stop early if found

        inorder(root->left, k);
        
        count++;
        if (count == k) {
            ans = root->val;
            return;
        }

        inorder(root->right, k);
    }

    int kthSmallest(TreeNode* root, int k) {
        inorder(root, k);
        return ans;
    }


// code ends 