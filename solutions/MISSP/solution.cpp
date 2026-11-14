#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given N dolls, where all dolls come in pairs except for one.
 * We need to find the type of the doll that does not have a pair.
 * 
 * Mathematical Property:
 * The XOR operation (^) has two key properties:
 * 1. x ^ x = 0 (Any number XORed with itself results in 0)
 * 2. x ^ 0 = x (Any number XORed with 0 remains unchanged)
 * 3. XOR is commutative and associative.
 * 
 * If we XOR all the doll types together, all pairs will cancel each other out (x ^ x = 0),
 * leaving only the doll type that appears an odd number of times.
 * 
 * Time Complexity: O(N) per test case, where N is the number of dolls.
 * Space Complexity: O(1), as we only need to store the running XOR sum.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;

        long long result = 0;
        for (int i = 0; i < n; ++i) {
            long long doll_type;
            cin >> doll_type;
            // XOR the current doll type with the running result
            result ^= doll_type;
        }

        // The remaining value in result is the doll type that doesn't have a pair
        cout << result << "\n";
    }

    return 0;
}