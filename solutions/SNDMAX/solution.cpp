#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Second Max of Three Numbers
 * Approach: To find the second maximum of three distinct numbers (a, b, c),
 * we can store them in an array, sort the array, and pick the middle element.
 * Given the constraints (N <= 6, integers <= 10000), this is highly efficient.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    while (n--) {
        long long arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];

        // Sort the three numbers
        sort(arr, arr + 3);

        // The second maximum is the element at index 1 after sorting
        cout << arr[1] << "\n";
    }

    return 0;
}