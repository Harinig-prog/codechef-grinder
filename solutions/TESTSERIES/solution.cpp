#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Test Match Series
 * Logic:
 * We are given 5 match results.
 * 0: Draw
 * 1: India wins
 * 2: England wins
 * 
 * We need to count the number of wins for India and England.
 * If india_wins > england_wins -> INDIA
 * If england_wins > india_wins -> ENGLAND
 * Otherwise -> DRAW
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few integer variables.
 */

void solve() {
    int india_wins = 0;
    int england_wins = 0;
    
    for (int i = 0; i < 5; ++i) {
        int r;
        cin >> r;
        if (r == 1) {
            india_wins++;
        } else if (r == 2) {
            england_wins++;
        }
    }
    
    if (india_wins > england_wins) {
        cout << "INDIA" << "\n";
    } else if (england_wins > india_wins) {
        cout << "ENGLAND" << "\n";
    } else {
        cout << "DRAW" << "\n";
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