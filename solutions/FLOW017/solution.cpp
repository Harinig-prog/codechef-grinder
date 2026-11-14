#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Second Largest
 * Approach: To find the second largest of three numbers, we can store them in an array,
 * sort the array, and pick the middle element (index 1).
 * Time Complexity: O(1) per test case (sorting 3 elements is constant time).
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long arr[3];
        cin >> arr[0] >> arr[1] >> arr[2];
        
        // Sorting the three numbers
        sort(arr, arr + 3);
        
        // The second largest is at index 1 after sorting
        cout << arr[1] << "\n";
    }
    
    return 0;
}