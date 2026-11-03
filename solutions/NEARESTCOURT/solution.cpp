#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given two points X and Y on a number line. We need to find a point Z
 * such that max(|X - Z|, |Y - Z|) is minimized.
 * 
 * Let D = |X - Y|. The midpoint between X and Y is (X + Y) / 2.
 * If we choose Z to be the midpoint, the distance for both is D / 2.
 * If D is even, D/2 is an integer, so Z = (X + Y) / 2 gives max distance D/2.
 * If D is odd, the midpoint is not an integer. We can choose Z to be either
 * floor((X + Y) / 2) or ceil((X + Y) / 2).
 * In this case, one person travels (D - 1) / 2 and the other travels (D + 1) / 2.
 * The maximum of these is (D + 1) / 2.
 * 
 * In both cases, the answer is ceil(|X - Y| / 2.0).
 * Using integer arithmetic, this is (abs(X - Y) + 1) / 2.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        long long diff = abs(x - y);
        // The minimum maximum distance is ceil(diff / 2)
        // Using integer division: (diff + 1) / 2
        long long ans = (diff + 1) / 2;
        
        cout << ans << "\n";
    }
    
    return 0;
}