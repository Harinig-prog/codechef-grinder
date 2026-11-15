#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given two integers X (time for bike) and Y (time for car).
 * We need to determine which is smaller.
 * If X < Y, BIKE is faster.
 * If Y < X, CAR is faster.
 * If X == Y, they take the SAME time.
 * 
 * Constraints: 1 <= X, Y <= 10.
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        if (x < y) {
            cout << "BIKE" << "\n";
        } else if (y < x) {
            cout << "CAR" << "\n";
        } else {
            cout << "SAME" << "\n";
        }
    }
    
    return 0;
}