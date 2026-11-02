#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: LUCKYFR - Lucky Four
 * Approach:
 * Since the input numbers can be up to 10^9, we can treat each number as a string
 * or process it digit by digit using modulo and division.
 * Given the constraints (T <= 10^5), reading the input as a string is efficient
 * and handles the digit counting easily.
 * 
 * Time Complexity: O(T * D), where D is the number of digits (max 10).
 * Space Complexity: O(D) to store the string representation of the number.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        string s;
        cin >> s;

        int count = 0;
        for (char c : s) {
            if (c == '4') {
                count++;
            }
        }
        cout << count << "\n";
    }

    return 0;
}