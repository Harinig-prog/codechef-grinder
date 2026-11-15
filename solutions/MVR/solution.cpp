#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Messi vs Ronaldo
 * Logic:
 * Messi's points = (A * 2) + B
 * Ronaldo's points = (X * 2) + Y
 * Compare the two sums and print the result.
 * Constraints are small (0-100), so standard int is sufficient.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B, X, Y;
    if (!(cin >> A >> B >> X >> Y)) return 0;

    int messi_points = (A * 2) + B;
    int ronaldo_points = (X * 2) + Y;

    if (messi_points > ronaldo_points) {
        cout << "Messi" << "\n";
    } else if (ronaldo_points > messi_points) {
        cout << "Ronaldo" << "\n";
    } else {
        cout << "Equal" << "\n";
    }

    return 0;
}