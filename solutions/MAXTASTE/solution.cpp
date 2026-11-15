#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The dish consists of one ingredient from {A, B} and one from {C, D}.
 * We need to maximize (first_ingredient + second_ingredient).
 * The possible combinations are:
 * 1. A + C
 * 2. A + D
 * 3. B + C
 * 4. B + D
 * 
 * The maximum tastiness is simply max(A, B) + max(C, D).
 * Given the constraints (1 <= a, b, c, d <= 100), the sum will not exceed 200,
 * so standard 'int' is sufficient.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        // The maximum tastiness is the sum of the maximum of the first pair
        // and the maximum of the second pair.
        int max_first = max(a, b);
        int max_second = max(c, d);

        cout << (max_first + max_second) << "\n";
    }

    return 0;
}