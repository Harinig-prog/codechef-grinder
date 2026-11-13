#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: FCTRL2 - Small factorials
 * Since n can be up to 100, n! will far exceed the capacity of a 64-bit integer.
 * We must implement arbitrary-precision arithmetic (BigInt) using a vector or array.
 * 100! has 158 digits, so a vector of integers is sufficient.
 */

void solve() {
    int n;
    cin >> n;
    
    // Vector to store digits of the factorial in reverse order
    vector<int> res;
    res.push_back(1);
    
    for (int i = 2; i <= n; ++i) {
        int carry = 0;
        for (int j = 0; j < res.size(); ++j) {
            int prod = res[j] * i + carry;
            res[j] = prod % 10;
            carry = prod / 10;
        }
        while (carry) {
            res.push_back(carry % 10);
            carry /= 10;
        }
    }
    
    // Print digits in correct order
    for (int i = res.size() - 1; i >= 0; --i) {
        cout << res[i];
    }
    cout << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}