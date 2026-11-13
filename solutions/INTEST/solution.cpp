#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Enormous Input Test (INTEST)
 * The problem requires reading up to 10^7 integers and checking divisibility by K.
 * Given the large input size (N = 10^7), fast I/O is mandatory.
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long k;
    
    // Read N and K. If input fails, exit.
    if (!(cin >> n >> k)) return 0;

    int count = 0;
    long long a;

    // Process each of the N integers
    for (int i = 0; i < n; ++i) {
        cin >> a;
        // Check if the number is divisible by K
        if (a % k == 0) {
            count++;
        }
    }

    // Output the final count
    cout << count << "\n";

    return 0;
}