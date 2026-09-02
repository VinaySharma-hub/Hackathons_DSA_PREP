#include <bits/stdc++.h>
using namespace std;

#define int long long
#define ld long double
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define F first
#define S second

int findCount(int arr[],int lenght, int num , int diff) {

int count =0;
for(int i =0;i<lenght;i++){
    if(abs(arr[i]-num)<=diff){
count++;
    }
}
return count ; 
    
}

signed main() {
    int arr[] = {12, 3 ,14 ,56, 77 ,13};
    int length = sizeof(arr) / sizeof(arr[0]);
    int num = 13;
    int diff = 2;

    int result = findCount(arr, length, num, diff);

    cout << result;

    return 0;
}