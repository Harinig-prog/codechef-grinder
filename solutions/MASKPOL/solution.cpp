#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N total people, A of whom are infected.
 * The virus spreads only if an infected person and an uninfected person 
 * interact without masks.
 * 
 * To stop the spread, we need to ensure that no interaction between an 
 * infected person and an uninfected person occurs without a mask.
 * 
 * We have two groups:
 * 1. Infected people: A
 * 2. Uninfected people: N - A
 * 
 * If we mask all A infected people, the virus cannot spread.
 * If we mask all (N - A) uninfected people, the virus cannot spread.
 * 
 * To minimize the number of masks used, we should choose the smaller of the two groups:
 * min(A, N - A).
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, a;
        cin >> n >> a;
        
        // The minimum number of masks required is the minimum of the 
        // number of infected people or the number of healthy people.
        // If we mask all infected people, no spread occurs.
        // If we mask all healthy people, no spread occurs.
        int result = min(a, n - a);
        
        cout << result << "\n";
    }

    return 0;
}