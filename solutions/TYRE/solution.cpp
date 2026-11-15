#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Tyre problem
 * Logic:
 * Each bike has 2 tyres and each car has 4 tyres.
 * Total tyres = (N * 2) + (M * 4)
 * Constraints: N, M <= 100. The result will not exceed 600, 
 * so 'int' is sufficient, but 'long long' is used for safety.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n, m;
        cin >> n >> m;
        
        // Calculate total tyres
        long long total_tyres = (n * 2) + (m * 4);
        
        // Output the result
        cout << total_tyres << "\n";
    }
    
    return 0;
}