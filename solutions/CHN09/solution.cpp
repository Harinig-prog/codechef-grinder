#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Malvika wants all balloons to be the same color.
 * There are only two colors: 'a' (amber) and 'b' (brass).
 * To make all balloons 'a', we must paint all 'b' balloons to 'a'.
 * To make all balloons 'b', we must paint all 'a' balloons to 'b'.
 * The minimum number of flips required is simply the minimum of the count of 'a's 
 * and the count of 'b's in the string.
 * 
 * Time Complexity: O(N) per test case, where N is the length of the string.
 * Space Complexity: O(N) to store the string, or O(1) if processed character by character.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        string s;
        cin >> s;
        
        int count_a = 0;
        int count_b = 0;
        
        // Count occurrences of each color
        for (char c : s) {
            if (c == 'a') {
                count_a++;
            } else if (c == 'b') {
                count_b++;
            }
        }
        
        // The minimum flips to make all 'a' is count_b
        // The minimum flips to make all 'b' is count_a
        // We take the minimum of these two values
        cout << min(count_a, count_b) << "\n";
    }
    
    return 0;
}