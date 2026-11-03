#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The game follows standard table tennis rules:
 * 1. First to 11 points wins, unless both reach 10 points.
 * 2. If both reach 10 points, the game continues until one player leads by 2 points.
 * 
 * We need to count the occurrences of '1' (Chef) and '0' (Opponent).
 * Since the problem guarantees a valid finished match, we simply iterate through 
 * the string, count the points, and determine the winner based on the rules.
 */

void solve() {
    string s;
    cin >> s;
    
    int chef_points = 0;
    int opponent_points = 0;
    
    for (char c : s) {
        if (c == '1') {
            chef_points++;
        } else {
            opponent_points++;
        }
    }
    
    if (chef_points > opponent_points) {
        cout << "WIN" << "\n";
    } else {
        cout << "LOSE" << "\n";
    }
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    
    return 0;
}