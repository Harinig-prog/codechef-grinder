#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Building Race
 * Chef takes A/X minutes to reach the ground floor.
 * Chefina takes B/Y minutes to reach the ground floor.
 * To compare A/X and B/Y without floating point precision issues,
 * we compare A * Y and B * X.
 * 
 * If A * Y < B * X, then A/X < B/Y (Chef is faster).
 * If A * Y > B * X, then A/X > B/Y (Chefina is faster).
 * If A * Y == B * X, then A/X == B/Y (Both reach at the same time).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long a, b, x, y;
        cin >> a >> b >> x >> y;

        // Time for Chef = a/x
        // Time for Chefina = b/y
        // Compare a/x vs b/y by cross-multiplying: a*y vs b*x
        long long timeChef = a * y;
        long long timeChefina = b * x;

        if (timeChef < timeChefina) {
            cout << "Chef" << "\n";
        } else if (timeChefina < timeChef) {
            cout << "Chefina" << "\n";
        } else {
            cout << "Both" << "\n";
        }
    }

    return 0;
}