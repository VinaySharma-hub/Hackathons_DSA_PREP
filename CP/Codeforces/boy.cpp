#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool visited[26] = {false};
    int count = 0;
    string username;
    cin >> username;
    for (char c : username)
    {
        if (!visited[c - 'a'])
        {
            visited[c - 'a'] = true;
            count++;
        }
    }
    if (count % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}