#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given three integers N_A, N_B, and N_C representing the number of soldiers.
 * An army is dominant if its size is strictly greater than the sum of the other two.
 * We need to check if:
 * 1. N_A > N_B + N_C
 * 2. N_B > N_A + N_C
 * 3. N_C > N_A + N_B
 * If any of these conditions are true, output YES, otherwise NO.
 * 
 * Constraints:
 * T <= 1000
 * N_A, N_B, N_C <= 100
 * Time complexity per test case: O(1)
 * Total time complexity: O(T)
 * Space complexity: O(1)
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int na, nb, nc;
        cin >> na >> nb >> nc;

        // Check if any army is dominant
        if (na > (nb + nc) || nb > (na + nc) || nc > (na + nb)) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}