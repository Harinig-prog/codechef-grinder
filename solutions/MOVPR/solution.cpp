#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/**
 * Problem Analysis:
 * Chef needs 2 popcorns and 3 drinks.
 * Let P = popcorn, D = drink.
 * Combo = (P + D) costs Z.
 * 
 * Possible strategies:
 * 1. Buy everything individually: 2*X + 3*Y
 * 2. Buy 1 combo: Z + 1*X + 2*Y
 * 3. Buy 2 combos: 2*Z + 1*Y
 * 
 * We calculate the minimum of these combinations.
 * The input format consists of a single line, not multiple test cases.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long X, Y, Z;
    if (!(cin >> X >> Y >> Z)) return 0;

    // Strategy 1: All individual
    long long cost1 = 2 * X + 3 * Y;
    
    // Strategy 2: 1 combo + 1 popcorn + 2 drinks
    long long cost2 = Z + X + 2 * Y;
    
    // Strategy 3: 2 combos + 1 drink
    long long cost3 = 2 * Z + Y;
    
    long long ans = min({cost1, cost2, cost3});
    
    cout << ans << endl;

    return 0;
}