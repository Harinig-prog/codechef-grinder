#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have G girls and B boys, where B > G.
 * Each team requires exactly 1 girl and 1 boy.
 * The maximum number of teams that can be formed is G (since there are only G girls).
 * Therefore, G boys will be paired with G girls.
 * The number of boys left over is the total number of boys minus the number of boys paired.
 * Remaining boys = B - G.
 * 
 * Constraints:
 * 1 <= T <= 100
 * 1 <= G < B <= 100
 * Since the values are small, standard 'int' is sufficient.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long g, b;
        cin >> g >> b;
        
        // The number of boys who cannot participate is the difference between
        // the total number of boys and the number of girls (who limit the teams).
        long long result = b - g;
        
        cout << result << "\n";
    }
    
    return 0;
}