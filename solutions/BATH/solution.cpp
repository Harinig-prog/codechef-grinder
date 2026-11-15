#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * - Geyser capacity: X litres
 * - Bucket capacity: Y litres
 * - Water required per person: 2 * Y litres
 * - Number of people = floor(X / (2 * Y))
 * 
 * Constraints:
 * - 1 <= T <= 1000
 * - 1 <= X, Y <= 100
 * - Since X and Y are small, standard integer arithmetic is sufficient.
 * - Time complexity per test case: O(1)
 * - Space complexity: O(1)
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
        
        // Each person needs 2 buckets of size Y, so 2 * Y total.
        // The number of people is the integer division of total water by water per person.
        int water_per_person = 2 * y;
        int max_people = x / water_per_person;
        
        cout << max_people << "\n";
    }
    
    return 0;
}