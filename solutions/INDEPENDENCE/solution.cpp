#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have three colors with counts A, B, and C. We need to arrange them in a line
 * such that no two adjacent strips have the same color.
 * 
 * Let the counts be sorted such that x <= y <= z.
 * The most frequent color (z) must be placed such that it is separated by the 
 * other two colors (x and y).
 * The maximum number of items of the most frequent color that can be placed 
 * without being adjacent is (x + y) + 1.
 * 
 * Therefore, the condition for a valid arrangement is:
 * max(A, B, C) <= (sum of the other two) + 1
 * 
 * This is equivalent to:
 * max(A, B, C) <= (A + B + C - max(A, B, C)) + 1
 */

void solve() {
    long long arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    
    sort(arr, arr + 3);
    
    // arr[0] is smallest, arr[2] is largest
    // Condition: largest <= (sum of others) + 1
    if (arr[2] <= (arr[0] + arr[1] + 1)) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}