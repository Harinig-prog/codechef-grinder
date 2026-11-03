#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Rivalry
 * The task is to calculate the final ratings of two individuals, Dominater and Everule,
 * after applying their respective rating changes, and compare them.
 * 
 * Final Rating of Dominater = R1 + D1
 * Final Rating of Everule = R2 + D2
 * 
 * Constraints:
 * R1, R2: [1, 3000]
 * D1, D2: [-200, 200]
 * The final ratings are guaranteed to be distinct.
 * 
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Reading input
    long long r1, r2;
    long long d1, d2;

    if (!(cin >> r1 >> r2)) return 0;
    if (!(cin >> d1 >> d2)) return 0;

    // Calculating final ratings
    long long final_r1 = r1 + d1;
    long long final_r2 = r2 + d2;

    // Comparing and printing the result
    if (final_r1 > final_r2) {
        cout << "Dominater" << "\n";
    } else {
        cout << "Everule" << "\n";
    }

    return 0;
}