#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second

void solve() {
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    cin>>n;
    vector<int>array(n);
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }
    int start=0;
    int length=0;
    for(int i =0;i<n;i++){
        if(array[i]<=array[i+1]){
            continue;
        }
        else {
            length=max(length,i-start+1);
            start=i+1;
        }
    }
    if(length==0){
        return cout<<n<<endl,0;
    }
    else{
    cout << length << endl;
}
}


// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);

//     int n;
//     cin >> n;

//     vector<int> a(n);
//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     int current_len = 1;
//     int max_len = 1;

//     for (int i = 1; i < n; i++) {
//         if (a[i] >= a[i - 1]) {
//             current_len++;
//         } else {
//             current_len = 1;
//         }
//         max_len = max(max_len, current_len);
//     }

//     cout << max_len << "\n";

//     return 0;
// }