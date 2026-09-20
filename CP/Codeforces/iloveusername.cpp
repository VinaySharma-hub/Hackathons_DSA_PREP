#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int>a(t);
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    int min_val = a[0];
int max_val = a[0];
int total_amazing = 0;

for (int i = 1; i < t; i++) {
    // Check Condition 1: All-time best
    if (a[i] > max_val) {
        total_amazing++;
        max_val = a[i]; // Update the highest score seen so far
    } 
    // Check Condition 2: All-time worst
    else if (a[i] < min_val) {
        total_amazing++;
        min_val = a[i]; // Update the lowest score seen so far
    }
}
cout<<total_amazing<<endl;
}