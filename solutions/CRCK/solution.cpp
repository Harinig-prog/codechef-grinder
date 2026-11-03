#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef bakes one cake every day from today (X) until the 24th of December.
 * The number of days from X to 24 inclusive is calculated as:
 * (24 - X) + 1
 * 
 * Constraints: 1 <= X <= 24.
 * Time Complexity: O(1) per test case.
 * Space Complexity: O(1).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single input X, but standard competitive 
    // programming practice often involves multiple test cases. 
    // Given the prompt asks to handle multiple test cases if applicable:
    int t = 1; 
    // If the input format were to contain T test cases, we would use:
    // cin >> t;
    
    while (t--) {
        int X;
        if (!(cin >> X)) break;
        
        // Calculate the number of days from X to 24 inclusive
        int result = 24 - X + 1;
        
        cout << result << "\n";
    }

    return 0;
}