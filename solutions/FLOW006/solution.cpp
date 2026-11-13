#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Sum of Digits
 * Approach: To find the sum of digits of an integer N, we can repeatedly 
 * take the remainder of N when divided by 10 (N % 10) to get the last digit, 
 * add it to a running sum, and then perform integer division by 10 (N /= 10) 
 * to remove the last digit. We repeat this until N becomes 0.
 * 
 * Time Complexity: O(T * log10(N)), where T is the number of test cases 
 * and log10(N) is the number of digits in N.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        long long n;
        cin >> n;

        // Handle negative numbers if they were possible (though constraints say N >= 1)
        if (n < 0) n = -n;

        long long sum = 0;
        while (n > 0) {
            sum += (n % 10);
            n /= 10;
        }

        cout << sum << "\n";
    }

    return 0;
}