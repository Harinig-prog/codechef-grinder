#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each round of Surya Namaskar consists of 12 yoga poses.
 * Given N total poses, the number of complete rounds is the integer division of N by 12.
 * 
 * Constraints: 1 <= N <= 100.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single integer N input, 
    // but standard competitive programming practice often involves 
    // handling a single input as requested.
    long long n;
    if (cin >> n) {
        // Calculate the number of complete rounds
        long long rounds = n / 12;
        cout << rounds << "\n";
    }

    return 0;
}