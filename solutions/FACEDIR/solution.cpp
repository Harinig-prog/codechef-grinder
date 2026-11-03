#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef starts facing North.
 * Each second, he rotates 90 degrees clockwise.
 * The directions in clockwise order are:
 * 0: North
 * 1: East
 * 2: South
 * 3: West
 * 
 * After X seconds, the direction is (X % 4).
 * 0 -> North
 * 1 -> East
 * 2 -> South
 * 3 -> West
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
        
        int direction = x % 4;
        
        if (direction == 0) {
            cout << "North" << "\n";
        } else if (direction == 1) {
            cout << "East" << "\n";
        } else if (direction == 2) {
            cout << "South" << "\n";
        } else {
            cout << "West" << "\n";
        }
    }
    
    return 0;
}