#include <iostream>
using namespace std;
// ## binary search tree from the array to tree
struct Node {
    int data;
    Node* left;
    Node* right;
    
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to insert a value in BST
Node* insert(Node* root, int val) {
    if (root == NULL)
        return new Node(val);
    
    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);
    
    return root;
}

// Utility to build BST from array
Node* buildBST(int arr[], int n) {
    Node* root = NULL;
    for (int i = 0; i < n; i++)
        root = insert(root, arr[i]);
    return root;
}

// Inorder traversal to check BST
void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    int arr[] = {10, 5, 15, 2, 7, 12, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    Node* root = buildBST(arr, n);
    
    cout << "Inorder traversal of BST: ";
    inorder(root);
    cout << endl;
}
