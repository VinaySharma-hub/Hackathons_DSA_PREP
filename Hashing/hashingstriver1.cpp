#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
//     int n ;
//     cin >> n ;
//     int arr[n];
//     for(int i =0;i<n;i++ ){
//         cin>>arr[i];
//     }
//     // precompute
//     int hash[13];
//     for( int i=0;i<n;i++){
//         hash[arr[i]]+=1;
//     }

//     int q;
//     cin>> q;
//     while(q--){
//         int number ;
//         cin>> number;
//         // fetch
//         cout<<hash[number]<<endl;
//     }
// }

// character hashing 
//     string s;
//     cin>>s;
//     int n=s.size();
// // precomputing the hash
//     int hash[26]={0};
//     for(int i=0;i<n;i++){
//         hash[s[i]-'a']++;
//     }
//     int q;
//     cin >> q;
//     while(q--){
//         char c;
//         cin >> c;
//         //fetch
//         cout << hash[c-'a']<<endl;
//     }
//     return 0;
// }


// map 
     int n;
     cin>> n ;
     int arr[n];
    //  for (int i =0;i<n;i++){
    //     cin>>arr[i];
    //  }

     // precomputing 
    //  map<int,int>mpp;
    //  for(int i=0;i<n;i++){
    //     mpp[arr[i]]++;
    //  } 

    // for(auto it : mpp){  //This is a range-based for loop introduced in C++11.
    //     cout<<it.first<< " -> " <<it.second<<endl;
    // }
    //for (auto _begin = mpp.begin(), _end = mpp.end(); _begin != _end; ++_begin) {
    // auto it = *_begin;  // get the key-value pair
    // cout << it.first << " -> " << it.second << endl;
// internally something this code runs in the map data structure }



// precompute for unordered hash map
    unordered_map<int,int>mpp;
    for (int i =0;i<n;i++){
        cin>>arr[i];
        //o(n)
        mpp[arr[i]]++;
    }
     int q;
     cin>>q;
     while(q--){
        int number ;
        cin>>number ;
        // fetch 
        cout<<mpp[number] << endl;
     }
return 0;
    }
