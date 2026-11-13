#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: ATM (HS08TEST)
 * Logic:
 * 1. Check if the withdrawal amount X is a multiple of 5.
 * 2. Check if the balance Y is sufficient to cover (X + 0.50).
 * 3. If both conditions are met, output (Y - X - 0.50) formatted to 2 decimal places.
 * 4. Otherwise, output the original balance Y formatted to 2 decimal places.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X;
    double Y;

    // The problem statement implies a single test case per execution based on the 
    // standard format for this specific problem (HS08TEST).
    if (cin >> X >> Y) {
        // Check if X is a multiple of 5 and if balance is sufficient
        if (X % 5 == 0 && (double)X + 0.50 <= Y) {
            cout << fixed << setprecision(2) << (Y - (double)X - 0.50) << "\n";
        } else {
            // Transaction failed, print original balance
            cout << fixed << setprecision(2) << Y << "\n";
        }
    }

    return 0;
}