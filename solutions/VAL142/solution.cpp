#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef needs to choose 7 positive integers a1, a2, ..., a7 such that:
 * a_{i+1} >= 2 * a_i for i = 1 to 6.
 * We want to minimize the total sum S = a1 + a2 + ... + a7.
 * To minimize the sum, we should pick the smallest possible values:
 * a1 = 1
 * a2 = 2 * a1 = 2
 * a3 = 2 * a2 = 4
 * a4 = 2 * a3 = 8
 * a5 = 2 * a4 = 16
 * a6 = 2 * a5 = 32
 * a7 = 2 * a6 = 64
 * 
 * The minimum sum is 1 + 2 + 4 + 8 + 16 + 32 + 64 = 127.
 * If the budget X is at least 127, Chef can always satisfy the condition.
 * If X < 127, it is impossible to pick 7 positive integers satisfying the condition.
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
        
        // The minimum sum of 7 gifts satisfying a_{i+1} >= 2 * a_i
        // starting with a_1 = 1 is 127.
        if (x >= 127) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}