#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given a binary string of even length N.
 * We need to process the string in chunks of 2 characters.
 * Mapping:
 * "00" -> 'A'
 * "01" -> 'T'
 * "10" -> 'C'
 * "11" -> 'G'
 * 
 * Since N <= 1000 and sum of N <= 1000, a simple linear scan O(N) is optimal.
 */

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    string result = "";
    for (int i = 0; i < n; i += 2) {
        string pair = s.substr(i, 2);
        if (pair == "00") {
            result += 'A';
        } else if (pair == "01") {
            result += 'T';
        } else if (pair == "10") {
            result += 'C';
        } else if (pair == "11") {
            result += 'G';
        }
    }
    cout << result << "\n";
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