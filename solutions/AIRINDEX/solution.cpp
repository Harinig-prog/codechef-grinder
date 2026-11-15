#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Air Quality Index
 * The condition is that the AQI (X) must be strictly below 100.
 * If X < 100, output YES.
 * Otherwise, output NO.
 * 
 * Time Complexity: O(1) per test case
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X;
    // The problem description implies a single input X, 
    // but standard competitive programming practice often involves 
    // reading until EOF or a specified number of test cases.
    // Based on the problem description, we read X.
    if (cin >> X) {
        if (X < 100) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}