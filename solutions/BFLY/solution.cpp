#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have R red, G green, and B blue butterflies and flowers.
 * Each butterfly must feed on a flower of a different color.
 * Let the total number of butterflies be N = R + G + B.
 * 
 * A butterfly of color X cannot feed on a flower of color X.
 * This is equivalent to saying that the number of butterflies of color X 
 * must be less than or equal to the total number of flowers of other colors.
 * 
 * Specifically:
 * 1. R <= G + B
 * 2. G <= R + B
 * 3. B <= R + G
 * 
 * If these three conditions are met, it is always possible to arrange the 
 * matching. This is a known result related to Hall's Marriage Theorem or 
 * simply the condition for the existence of a derangement-like matching 
 * in a bipartite graph where we have three sets of nodes.
 * 
 * Constraints: R, G, B up to 10^8, so use long long to prevent overflow 
 * during addition, though standard int would suffice for comparison.
 */

void solve() {
    long long R, G, B;
    if (!(cin >> R >> G >> B)) return;

    // Check the conditions:
    // No color can exceed the sum of the other two.
    if (R <= G + B && G <= R + B && B <= R + G) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
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