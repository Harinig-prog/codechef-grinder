#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Id and Ship (FLOW010)
 * Approach: Read the character and use a series of if-else or switch statements
 * to map the character ID to the corresponding ship class.
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
        char id;
        cin >> id;

        if (id == 'B' || id == 'b') {
            cout << "BattleShip" << "\n";
        } else if (id == 'C' || id == 'c') {
            cout << "Cruiser" << "\n";
        } else if (id == 'D' || id == 'd') {
            cout << "Destroyer" << "\n";
        } else if (id == 'F' || id == 'f') {
            cout << "Frigate" << "\n";
        }
    }

    return 0;
}