#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countComponents(int V, vector<vector<int>> &edges)
    {
        vector<vector<int>> adj(V); // creation of the adjacency list of the graph components 
        for (auto &e : edges)  // traversing through edges components
        {
            adj[e[0]].push_back(e[1]); // creating graph in addition
            adj[e[1]].push_back(e[0]);
        }
        vector<int> visited(V, 0); // visited array for tracing the components next to go right .
        int components = 0; // number of components
        for (int i = 0; i < V; i++) // for loop traversing from i=0 to V
        {
            if (!visited[i]) // checking whether we have traverse it or not in addition
            {
                components++; // components add karo naya hai 
                // starting the traversal
                queue<int> q;  // queue initialization
                q.push(i);   // pushing i in the queue
                visited[i] = 1; // assume visited[i]=1 bcs we have visited it .
                // perform bfs traversal
                while (!q.empty()) // if q is not empty 
                {
                    int node = q.front(); // pop out the q 
                    q.pop(); // q ko khali karo 
                    // visit all visited neighbours
                    for (auto &nbr : adj[node])  // queue ke jo element aaya hai uski list me dekho kitne log hai 
                    {
                        if (!visited[nbr]) // agar visited nhi hai to mark them one and q me push kardo uss bc ko bhi bcs this is called bfs dfs me jo pehle ata hai usi ka call mar dete hai bas itna hi antar hai bhai sahab
                        {
                            visited[nbr] = 1;
                            q.push(nbr);
                        }
                    }
                }
            }
        }
        return components;
    }
};
int main()
{
    int V = 5;
    vector<vector<int>> edges = {{0, 1}, {1, 2}, {3, 4}};
    Solution sol;
    cout << "Number of Connected Components:"
         << sol.countComponents(V, edges) << endl;
    return 0;
}
