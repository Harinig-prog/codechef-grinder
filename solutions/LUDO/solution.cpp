#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Chef Plays Ludo
 * Logic: A player can enter a token if and only if the die roll X is 6.
 * Time Complexity: O(T), where T is the number of test cases.
 * Space Complexity: O(1).
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
        
        // Check if the rolled number is 6
        if (x == 6) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}