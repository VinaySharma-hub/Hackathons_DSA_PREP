#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 9;
    cout << m["banana"] << "\n";
    for (auto x : m)
    {
        cout << x.first << "" << x.second << "\n";
    }
    if (m.count("monkey"))
    {
        cout << "keyexists";
    }
    m["apple"] = 5;
    auto it = m.find("apple");

    if (it != m.end())
    {
        cout << "Found! Value: " << it->second << "\n";
    }
    else
    {
        cout << "Not found\n";
    }
}
