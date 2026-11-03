#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Total time in minutes = N * K
 * We need to convert this total time into H hours and M minutes.
 * H = (Total minutes) / 60
 * M = (Total minutes) % 60
 * 
 * Constraints:
 * N <= 30, K < 60
 * Max total minutes = 30 * 59 = 1770
 * This fits well within a standard integer, but we use long long for safety.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n, k;
        cin >> n >> k;
        
        long long total_minutes = n * k;
        
        long long h = total_minutes / 60;
        long long m = total_minutes % 60;
        
        cout << h << " " << m << "\n";
    }
    
    return 0;
}