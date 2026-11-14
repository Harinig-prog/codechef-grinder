#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: 404 Not Found
 * Logic: Read the integer X. If X == 404, output "NOT FOUND", else "FOUND".
 * Time Complexity: O(1)
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long x;
    if (cin >> x) {
        if (x == 404) {
            cout << "NOT FOUND" << "\n";
        } else {
            cout << "FOUND" << "\n";
        }
    }

    return 0;
}