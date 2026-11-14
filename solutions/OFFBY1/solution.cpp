#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: OFFBY1
 * The calculator computes A + B and appends a '1' to the end.
 * Appending a '1' to an integer X is equivalent to (X * 10) + 1.
 * Constraints: 1 <= A, B <= 50.
 * Max sum = 100. Max result = 1001.
 * This fits comfortably within a standard integer.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int A, B;
    // The problem description implies a single test case per run based on the format,
    // but we structure it to handle input as provided.
    if (cin >> A >> B) {
        int sum = A + B;
        // To append '1' to the end of the integer, multiply by 10 and add 1.
        int result = (sum * 10) + 1;
        cout << result << "\n";
    }

    return 0;
}