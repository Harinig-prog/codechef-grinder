#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to transform string S into "ADVITIYA".
 * For each character S[i], we can increment it cyclically (A->B, ..., Z->A).
 * The number of steps to change character 'c1' to 'c2' is:
 * (c2 - c1 + 26) % 26.
 * Since the string length is fixed at 8, we iterate through each index 
 * and sum the steps required for each character.
 */

void solve() {
    string s;
    cin >> s;
    string target = "ADVITIYA";
    long long total_steps = 0;

    for (int i = 0; i < 8; ++i) {
        int current_val = s[i] - 'A';
        int target_val = target[i] - 'A';
        
        // Calculate steps needed to reach target_val from current_val
        // If target_val >= current_val, steps = target_val - current_val
        // If target_val < current_val, steps = (26 - current_val) + target_val
        // This is equivalent to (target_val - current_val + 26) % 26
        int steps = (target_val - current_val + 26) % 26;
        total_steps += steps;
    }

    cout << total_steps << "\n";
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