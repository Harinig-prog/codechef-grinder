#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: WORDLE
 * The task is to compare two strings S and T of length 5 character by character.
 * If S[i] == T[i], the result character is 'G', otherwise it is 'B'.
 * 
 * Time Complexity: O(T * N) where T is the number of test cases and N=5.
 * Space Complexity: O(N) to store the strings.
 */

void solve() {
    string s, t;
    cin >> s >> t;
    
    string m = "";
    for (int i = 0; i < 5; ++i) {
        if (s[i] == t[i]) {
            m += 'G';
        } else {
            m += 'B';
        }
    }
    cout << m << "\n";
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