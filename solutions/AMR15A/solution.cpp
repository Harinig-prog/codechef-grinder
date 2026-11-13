#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Mahasena (AMR15A)
 * Approach:
 * 1. Read the number of soldiers N.
 * 2. Iterate through the N weapon counts.
 * 3. Count how many soldiers have an even number of weapons (lucky) 
 *    and how many have an odd number of weapons (unlucky).
 * 4. Compare the counts: if lucky > unlucky, print "READY FOR BATTLE",
 *    otherwise print "NOT READY".
 * 
 * Time Complexity: O(N) where N is the number of soldiers.
 * Space Complexity: O(1) as we only store counters.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    int lucky = 0;
    int unlucky = 0;

    for (int i = 0; i < n; ++i) {
        int weapons;
        cin >> weapons;
        
        // A number is even if it is divisible by 2
        if (weapons % 2 == 0) {
            lucky++;
        } else {
            unlucky++;
        }
    }

    // Check the condition: lucky > unlucky
    if (lucky > unlucky) {
        cout << "READY FOR BATTLE" << "\n";
    } else {
        cout << "NOT READY" << "\n";
    }

    return 0;
}