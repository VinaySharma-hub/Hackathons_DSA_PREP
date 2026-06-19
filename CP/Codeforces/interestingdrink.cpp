#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int l = n;

    vector<int> array;
    for (int i = 0; i < l; i++)
    {
        int bro;
        cin >> bro;
        array.push_back(bro);
    }
    sort(array.begin(), array.end());
    int q;
    cin >> q;
    while (q)
    {
        int m;
        cin >> m;
        
       int count = upper_bound(array.begin(), array.end(), m) - array.begin();
        q--;
        cout << count << '\n';
    }
   
}
