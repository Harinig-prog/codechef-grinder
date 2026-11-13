#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: TSORT (Simple Sorting)
 * Constraints: N <= 10^6, elements <= 10^6.
 * Approach: Since the range of elements is small (0 to 10^6), we can use 
 * Counting Sort or simply std::sort. Given N=10^6, std::sort (O(N log N)) 
 * is efficient enough within the 3s time limit. Fast I/O is mandatory.
 */

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    // Using a vector to store the numbers
    // N is up to 10^6, so vector is memory efficient
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Sort the array in non-decreasing order
    sort(arr.begin(), arr.end());

    // Output the sorted elements
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << "\n";
    }

    return 0;
}