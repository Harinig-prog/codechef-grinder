#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given the prices of 26 letters (a-z).
 * We are given a string S.
 * We need to make S a pangram (containing all 26 letters) by adding missing letters.
 * To minimize the cost, we identify which letters are missing from the string S
 * and sum their corresponding prices.
 * 
 * Constraints:
 * T <= 10
 * N <= 50,000
 * Prices <= 1,000,000
 * Total cost can exceed 2^31-1, so use long long for the sum.
 * 
 * Complexity:
 * Time: O(T * (N + 26)) which is well within the 1s limit.
 * Space: O(N) to store the string, or O(1) if processed character by character.
 */

void solve() {
    vector<long long> prices(26);
    for (int i = 0; i < 26; ++i) {
        cin >> prices[i];
    }

    string s;
    cin >> s;

    // Track which letters are present in the string
    vector<bool> present(26, false);
    for (char c : s) {
        if (c >= 'a' && c <= 'z') {
            present[c - 'a'] = true;
        }
    }

    // Calculate the cost of missing letters
    long long total_cost = 0;
    for (int i = 0; i < 26; ++i) {
        if (!present[i]) {
            total_cost += prices[i];
        }
    }

    cout << total_cost << "\n";
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