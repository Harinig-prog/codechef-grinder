#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given two integers X and Y representing the number of fans for Leo and Ronald.
 * If X > Y, we hold a "FREEKICK" session.
 * If Y > X, we hold a "PENALTY" session.
 * The problem guarantees X != Y.
 * 
 * Constraints: 0 <= X, Y <= 100.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case based on the input format description,
    // but standard competitive programming practice suggests checking if multiple test cases are provided.
    // Given the problem description "The first and only line of input contains...", we read once.
    
    long long X, Y;
    if (cin >> X >> Y) {
        if (X > Y) {
            cout << "FREEKICK" << "\n";
        } else {
            cout << "PENALTY" << "\n";
        }
    }

    return 0;
}