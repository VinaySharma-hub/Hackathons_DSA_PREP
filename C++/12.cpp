#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second

struct Node{
    int u,v,weight;
    Node(int _u,int _v,int _weight){
        u=_u;
        v=_v;
        weight=_weight;
    }
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
//     vector<Node> edges;
//     edges.push_back(Node(1,2,3));
//     // create a temporary Node object and then moves it (extra overhead)
//     edges.emplace_back(2,3,4); // constructing a Node directly in the vector memory space 
     
//     // remove_if shifts kept elements left and returns an iterator to the new logical end.
//     vector<int>vec={1,2,3,4,5,6,7,8};
//     vec.erase(remove_if(vec.begin(),vec.end(),[](int x){
//         return x%2!=0;

//     }),vec.end());
//     //modern C++ 20 equivalent
//     vector<int>vec3;
//     vec3.reserve(10000);
//     vector<int>adj_vec4;
//     adj_vec4.resize(100,100);
//     // lower_bound , upper_bound ,binary_search andd equal_range are all implemented using iterators and work on any sorted range, not just arrays or vectors.
//     vector<int> v = {10, 20, 30, 30, 30, 40, 50};
// // Find first position where value is >= 30
// auto lb = lower_bound(v.begin(), v.end(), 30); // Index 2

// // Find first position where value is > 30
// auto ub = upper_bound(v.begin(), v.end(), 30); // Index 5

// // Frequency count of value 30 in logarithmic time
// int freq = ub - lb; // Result: 3

// // Retrieve both bounds simultaneously
// auto [first, last] = equal_range(v.begin(), v.end(), 30);

// vector<int>v2={9,1,3,5,7,2,4,8,6};
// nth_element(v2.begin(),v2.begin()+3,v2.end());
// int fourth_smallest=v2[3]; // 4th smallest element in the vector






// std::vector<int> v5 = {1, 2, 3, 4, 5};

// // std::rotate: Left-rotates such that middle element (v.begin() + 2) becomes the head
// std::rotate(v5.begin(), v5.begin() + 2, v5.end()); // v5 becomes {3, 4, 5, 1, 2}

// // std::next_permutation: Transforms range to next lexicographical permutation
// std::vector<int> p = {1, 2, 3};
// do {
//     // Process unique permutation
// } while (std::next_permutation(p.begin(), p.end())); // permutation functions right .



std::set<int> st = {10, 20, 30, 40, 50};

// WRONG: O(N) due to sequential iterator increments
// auto it = std::lower_bound(st.begin(), st.end(), 30); 

// CORRECT: O(log N) tree navigation
// auto it = st.lower_bound(30);
// int successor = *it; // 30
// int predecessor = *prev(it); // 20
// cout << "Successor: " << successor << endl;
// cout << "Predecessor: " << predecessor << endl;





// // 1. Standard Min-Heap
// std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;

// // 2. Custom Lambda Comparator (Sorted by second element ascending)
// auto comp = [](const std::pair<int, int>& a, const std::pair<int, int>& b) {
//     return a.second > b.second; // Max-heap ordering inverted to behave as a min-heap
// };

// std::priority_queue<
//     std::pair<int, int>, 
//     std::vector<std::pair<int, int>>, 
//     decltype(comp)
// > custom_pq(comp);




}