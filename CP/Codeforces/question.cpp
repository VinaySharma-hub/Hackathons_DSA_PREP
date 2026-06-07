#include <iostream>
#include <string>

using namespace std;

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    string team1 = "", team2 = "";
    int goals1 = 0, goals2 = 0;

    for (int i = 0; i < n; ++i) {
        string current_team;
        cin >> current_team;

        // Assign the first encountered team name
        if (team1 == "") {
            team1 = current_team;
            goals1++;
        } 
        // If it matches the first team, increment its goals
        else if (current_team == team1) {
            goals1++;
        } 
        // Otherwise, it belongs to the second team
        else {
            team2 = current_team;
            goals2++;
        }
    }

    // Print the team with the maximum goals
    if (goals1 > goals2) {
        cout << team1 << "\n";
    } else {
        cout << team2 << "\n";
    }

    return 0;
}