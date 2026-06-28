#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int val;
    node *left;
    node *right;
    node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
node *createtree()
{
    int data;
    cout << "enter the data";
    cin >> data;
    if (data == -1)
    { // -1 for adding nothing in the tree node
        return NULL;
    }
    // create node
    node *root = new node(data);
    // creating the left subtreee
    // left node data
    root->left = createtree();
    // creating the right subtree
    // right node data
    root->right = createtree();
    return root;
}
int main()
{
    node *root = createtree();
    map<int, map<int, multiset<int>>> nodes;
    queue<pair<node *, pair<int, int>>> q;
    if (root)
    {
        q.push({root, {0, 0}});
    }
    while (!q.empty())
    {
        auto p = q.front();
        q.pop();
        node *nod = p.first;
        int row = p.second.first;
        int col = p.second.second;
        nodes[col][row].insert(nod->val);
        if (nod->left)
        {
            q.push({nod->left, {row + 1, col - 1}});
        }
        if (nod->right)
        {
            q.push({nod->right, {row + 1, col + 1}});
        }
    }
    vector<vector<int>> ans;
    for (auto Pcol : nodes)
    {
        vector<int> col_vals;
        for(auto prow:Pcol.second){
            col_vals.insert(col_vals.end(),prow.second.begin(),prow.second.end());
        }
        ans.push_back(col_vals);
    }
    
}
