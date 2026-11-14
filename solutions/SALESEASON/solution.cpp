#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Sale Season
 * Logic:
 * - If X <= 100: No discount (Pay X)
 * - If 100 < X <= 1000: Discount 25 (Pay X - 25)
 * - If 1000 < X <= 5000: Discount 100 (Pay X - 100)
 * - If X > 5000: Discount 500 (Pay X - 500)
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long x;
        cin >> x;
        
        long long final_amount;
        
        if (x <= 100) {
            final_amount = x;
        } else if (x <= 1000) {
            final_amount = x - 25;
        } else if (x <= 5000) {
            final_amount = x - 100;
        } else {
            final_amount = x - 500;
        }
        
        cout << final_amount << "\n";
    }
    
    return 0;
}