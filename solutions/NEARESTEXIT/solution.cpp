#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The bus has 100 seats.
 * Exit 1 is at seat 1.
 * Exit 2 is at seat 100.
 * Distance to Exit 1 = |X - 1| = X - 1
 * Distance to Exit 2 = |X - 100| = 100 - X
 * 
 * The passenger chooses the nearest exit.
 * If (X - 1) < (100 - X), they choose LEFT.
 * If (X - 1) > (100 - X), they choose RIGHT.
 * If (X - 1) == (100 - X), the problem implies we check the condition.
 * Sample case 2: X=50. Distance to 1 is 49, distance to 100 is 50. 49 < 50, so LEFT.
 * Sample case 5: X=51. Distance to 1 is 50, distance to 100 is 49. 50 > 49, so RIGHT.
 * 
 * Therefore, if X <= 50, output LEFT. Otherwise, output RIGHT.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int x;
        cin >> x;
        
        // Calculate distances
        int dist_left = x - 1;
        int dist_right = 100 - x;
        
        if (dist_left < dist_right) {
            cout << "LEFT" << "\n";
        } else {
            cout << "RIGHT" << "\n";
        }
    }
    
    return 0;
}