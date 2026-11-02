#include <iostream>

using namespace std;

/**
 * Problem: CASHBACK
 * Logic:
 * The problem specifies a single input X.
 * If X >= 200, the customer pays X - 50.
 * Otherwise, the customer pays X.
 * Constraints: 100 <= X <= 500.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int X;
    if (cin >> X) {
        if (X >= 200) {
            cout << (X - 50) << endl;
        } else {
            cout << X << endl;
        }
    }
    
    return 0;
}