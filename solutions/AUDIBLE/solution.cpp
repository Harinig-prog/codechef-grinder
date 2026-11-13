#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Audible Range
 * The dog hears frequencies in the range [67, 45000] inclusive.
 * We need to check if a given frequency X falls within this range.
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long x;
        cin >> x;

        // Check if X is within the audible range [67, 45000]
        if (x >= 67 && x <= 45000) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}