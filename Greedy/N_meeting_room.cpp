#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> start(n), end(n);
    for (int i = 0; i < n; i++) {
        cin >> start[i] >> end[i];
    }

    vector<pair<int,int>> activities;
    for (int i = 0; i < n; i++) {
        activities.push_back({end[i], start[i]});
    }

    
    sort(activities.begin(), activities.end());

    int count = 1;                     
    int lastEnd = activities[0].first;

  
    for (int i = 1; i < n; i++) {
        if (activities[i].second >= lastEnd) {
            count++;
            lastEnd = activities[i].first;
        }
    }

    cout << count;
    return 0;
}
