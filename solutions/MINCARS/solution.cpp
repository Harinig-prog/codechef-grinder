#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each car can hold at most 4 people.
 * To find the minimum number of cars for N people, we need to calculate ceil(N / 4).
 * Using integer arithmetic, ceil(N / 4) can be calculated as (N + 3) / 4.
 * 
 * Constraints:
 * T <= 1000
 * N <= 1000
 * The result will fit in a standard integer.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n;
        cin >> n;
        
        // Calculate minimum cars:
        // If n is divisible by 4, result is n/4.
        // If n is not divisible by 4, result is (n/4) + 1.
        // This is equivalent to (n + 3) / 4 using integer division.
        int cars = (n + 3) / 4;
        
        cout << cars << "\n";
    }

    return 0;
}