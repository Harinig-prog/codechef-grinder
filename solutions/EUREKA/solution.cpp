#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: EUREKA
 * The task is to calculate f(N) = (0.143 * N)^N and round it to the nearest integer.
 * Given constraints: 4 <= N <= 15.
 * 
 * Calculation:
 * For N = 15, (0.143 * 15)^15 = (2.145)^15.
 * 2.145^15 is approximately 32768, which fits comfortably within a standard 
 * double precision floating point type and a 64-bit integer (long long).
 * 
 * Rounding rule:
 * If x - floor(x) < 0.5, print floor(x).
 * Else, print floor(x) + 1.
 * This is equivalent to round(x).
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;

        // Calculate (0.143 * N)^N
        double base = 0.143 * (double)n;
        double result = pow(base, (double)n);

        // Round to the nearest integer
        // Using floor(x + 0.5) is a standard way to round to the nearest integer
        long long rounded_result = (long long)floor(result + 0.5);

        cout << rounded_result << "\n";
    }

    return 0;
}