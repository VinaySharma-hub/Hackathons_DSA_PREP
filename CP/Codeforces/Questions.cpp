// Question 1 of leetcode
// longest common prefix among strings by sorting them and comparing the first and last strings. Sorting ensures the most differing 
//strings are compared, making their shared prefix the answer.
//Time Complexity: O(n log n) (due to sorting) + O(min_len) (comparison), where min_len is the shortest string's length.
// #include<iostream>
// #include<vector>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main() {
//     vector<string> strs = {"flower", "flow", "flight"};
//     if (strs.empty()) {
//         cout << "" << endl;
//         return 0;
//     }
//     sort(strs.begin(), strs.end());
//     string first = strs[0];
//     string last = strs[strs.size() - 1];
//     int mini=min(first.size(), last.size());
//     int i = 0;
//     string result="";
//     while (i < mini && first[i] == last[i]) {
//       result += first[i];
//       i++;
//     }
//     cout<<result<<endl;
//     return 0;
// }


// Question 2 
// fint the occurence of full second word in the first word if there is occurence then return the startinig index of the first word
// if not then return the -1
// we will use the two pointer algorithm 
// #include <iostream>
// using namespace std;
// int findNeedle(const string &haystack, const string &needle) {
//     if (needle.empty()) return 0; // Edge case: empty needle
//     int n = haystack.size();
//     int m = needle.size();
//     for (int i = 0; i <= n - m; i++) {
//         int j = 0;
//         while (j < m && haystack[i + j] == needle[j]) {
//             j++;
//         }
//         if (j == m) {
//             return i; // Found at index i
//         }
//     }
//     return -1; // Not found
// }

// int main() {
//     string haystack = "sadohsad";
//     string needle = "sad";
//     int result = findNeedle(haystack, needle);
//     cout << result << endl; // Output: 0 (first "sad" starts at index 0)
//     return 0;
// }



// Question 3 focus on the length of last word of the string 
// #include<iostream>
// using namespace std;
// int main() {
//   string s="    fly me   to   the moon   ";
//   int i=0;
//         int n=s.size();
//         int count=0;
//         while(i<n){
//         if(s[i]!=' '){
//             count=0;
//             while(s[i]!=' ' && i<n){
//                 i++;
//                 count++;
//             }
//         }
//         else{
//             i++;
//         }
//          }
//         cout<<count;
//     }
// Question 4 
// Given a string columnTitle that represents the column title as appears in an Excel sheet, return its corresponding column number.

// For example:

// A -> 1
// B -> 2
// C -> 3
// ...
// Z -> 26
// AA -> 27
// AB -> 28 
// ...
 
// int titleToNumber(string columnTitle){
//         int n=columnTitle.size();
//         int sum=0;
//         for(int i=0;i<n;i++){
//             int bro =(columnTitle[i]-64)*pow(26,n-i-1);
//             sum=sum+bro;
//         }
//         return sum;
//      }


// the thing is ,, for accessing the 2d array matrix columns we will just do m=array[0].size()
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
// vector<vector<int>>accounts;
// vector<int>array;   13`2    
// array.push_back(4);
// accounts.push_back(array);
// cout<<accounts[0][3];
//                                   cout<<"Welcome to My Profile";
// }
// // for duplicate elemtms present in the vector of 0 to n-1 ,,i.e sneaky number 
//     vector<int> getSneakyNumbers(vector<int>& nums) {
//         int n=nums.size();
//         vector<int>array(n,0);
//         vector<int>newp;
//         for(int i=0;i<n;i++){
//             array[nums[i]]=array[nums[i]]+1;
//             if(array[nums[i]]==2){
//                newp.push_back(nums[i]);
//             }
//         }
//         return newp;
//     }


    

// Codeforces -- questions
#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> array(n); // Safe and standard

    int count = 0;
    for(int i = 0; i < n; i++) {
        cin >> array[i];
        if(array[i] == "++X" || array[i] == "X++") {
            count++;
        } else {
            count--;
        }
    }

    cout << count << endl;
    return 0;
}
