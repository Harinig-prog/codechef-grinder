#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The product of an array is non-negative if:
 * 1. There is at least one zero in the array (product becomes 0).
 * 2. The count of negative numbers is even (product becomes positive).
 * 
 * If the count of negative numbers is odd and there are no zeros, 
 * the product is negative. To fix this, we must remove at least one 
 * negative number to make the count even.
 * 
 * Strategy:
 * - Count the number of zeros. If count > 0, answer is 0.
 * - Count the number of negative integers.
 * - If count of negative integers is even, answer is 0.
 * - If count of negative integers is odd, answer is 1.
 */

void solve() {
    int N;
    cin >> N;
    
    int negative_count = 0;
    bool has_zero = false;
    
    for (int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        if (a == 0) {
            has_zero = true;
        } else if (a < 0) {
            negative_count++;
        }
    }
    
    if (has_zero) {
        cout << 0 << "\n";
    } else {
        if (negative_count % 2 == 0) {
            cout << 0 << "\n";
        } else {
            cout << 1 << "\n";
        }
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}