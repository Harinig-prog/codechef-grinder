#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: First and Last Digit
 * Approach:
 * 1. Read the input as a string to easily access the first and last characters.
 * 2. Convert the first character (index 0) and the last character (index length-1) 
 *    back to their integer values by subtracting '0'.
 * 3. Sum these two values and print the result.
 * 
 * Time Complexity: O(D) per test case, where D is the number of digits in N.
 * Space Complexity: O(D) to store the string representation of N.
 */

int main() {
    // Fast I/O for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        string n;
        cin >> n;

        // The first digit is at index 0
        int first_digit = n.front() - '0';
        
        // The last digit is at the last index
        int last_digit = n.back() - '0';

        cout << (first_digit + last_digit) << "\n";
    }

    return 0;
}