#include<bits/stdc++.h>
using namespace std;

int main(){
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int k;
        cin >> k;
        vector<int> array(k);
        for(int i = 0; i < k; i++){
            cin >> array[i];
        }
        
        // 1. Sort the array to easily find the boundaries and median
        sort(array.begin(), array.end());
        
        // 2. The optimal target position is always the median element
        int target = array[k / 2];
        
        // 3. The operations needed is the maximum distance any element has to travel.
        // Elements smaller than target move up by 1 per step.
        // Elements larger than target move down by 1 per step.
        int moves_needed = max(target - array[0], array[k-1] - target);
        
        cout << moves_needed << "\n";
    }
    return 0;
}