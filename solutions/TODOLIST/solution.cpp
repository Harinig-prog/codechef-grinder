#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: TODOLIST
 * The goal is to count how many problems have a difficulty rating >= 1000.
 * Chef wants to keep only problems with difficulty < 1000.
 * Therefore, we need to remove all problems where D_i >= 1000.
 * 
 * Time Complexity: O(N) per test case, where N is the number of problems.
 * Space Complexity: O(1) auxiliary space.
 */

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n;
        cin >> n;
        
        int remove_count = 0;
        for (int i = 0; i < n; ++i) {
            int difficulty;
            cin >> difficulty;
            
            // If the difficulty is 1000 or greater, it must be removed.
            if (difficulty >= 1000) {
                remove_count++;
            }
        }
        
        cout << remove_count << "\n";
    }

    return 0;
}