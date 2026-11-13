#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Reverse The Number (FLOW007)
 * Approach:
 * To reverse an integer, we can repeatedly extract the last digit using the modulo operator (%)
 * and build the reversed number by multiplying the current result by 10 and adding the digit.
 * Since the problem constraints are N <= 1,000,000, a standard 32-bit integer (int) is sufficient,
 * but using long long is safer practice in competitive programming.
 */

void solve() {
    long long n;
    cin >> n;
    
    long long reversed_n = 0;
    while (n > 0) {
        int digit = n % 10;
        reversed_n = reversed_n * 10 + digit;
        n /= 10;
    }
    
    cout << reversed_n << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    
    return 0;
}