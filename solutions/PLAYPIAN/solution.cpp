#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The log consists of a sequence of 'A's and 'B's.
 * Each day, both A and B play exactly once. This means every 2 characters
 * in the string represent one day.
 * For each day (every pair of characters s[i], s[i+1]), one must be 'A'
 * and the other must be 'B'.
 * If for any day, s[i] == s[i+1], the log is invalid.
 * 
 * Time Complexity: O(N) per test case, where N is the length of the string.
 * Space Complexity: O(1) auxiliary space.
 */

void solve() {
    string s;
    cin >> s;
    
    bool possible = true;
    // Iterate through the string in steps of 2 to check each day
    for (int i = 0; i < (int)s.length(); i += 2) {
        // In each pair, the characters must be different.
        // If they are the same, it means one person played twice or 
        // the other didn't play at all that day.
        if (s[i] == s[i + 1]) {
            possible = false;
            break;
        }
    }
    
    if (possible) {
        cout << "yes" << "\n";
    } else {
        cout << "no" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}