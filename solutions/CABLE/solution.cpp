#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Cuboid volume = A * B * C
 * Cube volume = X * X * X
 * Constraints: 1 <= A, B, C, X <= 10
 * Since the maximum value is 10, the maximum volume is 1000, 
 * which fits comfortably in a standard integer. 
 * However, using long long is a good practice to prevent overflow in similar problems.
 */

void solve() {
    long long A, B, C, X;
    if (!(cin >> A >> B >> C >> X)) return;

    long long volume_cuboid = A * B * C;
    long long volume_cube = X * X * X;

    if (volume_cuboid > volume_cube) {
        cout << "Cuboid" << "\n";
    } else if (volume_cube > volume_cuboid) {
        cout << "Cube" << "\n";
    } else {
        cout << "Equal" << "\n";
    }
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single line of input per test case,
    // but standard competitive programming practice often involves a test case count.
    // Given the problem description format, we handle the single input provided.
    solve();

    return 0;
}