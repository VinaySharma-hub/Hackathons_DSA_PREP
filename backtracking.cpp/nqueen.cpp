#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second
 
char ch[8][8];
int row[8];
int leftdiagonal[20],rightdiagonal[20];


int solve(int col){
    if(col==8){
        return 1;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i =0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>ch[i][j];
        }
    }
    return 0;
}