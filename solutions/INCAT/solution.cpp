#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given a string S of length 3. We need to determine if it can be 
 * rearranged to form the string "cat".
 * 
 * A string of length 3 can be rearranged to "cat" if and only if it contains
 * exactly one 'c', one 'a', and one 't'.
 * 
 * Approach:
 * 1. Read the string S.
 * 2. Sort the string S.
 * 3. Compare the sorted string with "act" (which is "cat" sorted).
 * 4. If they are equal, print "Yes", otherwise print "No".
 */

void solve() {
    string s;
    cin >> s;
    
    // Sort the input string to easily check for character composition
    sort(s.begin(), s.end());
    
    // The sorted version of "cat" is "act"
    if (s == "act") {
        cout << "Yes" << "\n";
    } else {
        cout << "No" << "\n";
    }
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // The problem description implies a single test case per input, 
    // but standard competitive programming practice often involves 
    // handling multiple test cases if specified. 
    // Based on the prompt "Handle multiple test cases", we implement a loop.
    int t = 1; 
    // If the input format actually contains a number of test cases, 
    // uncomment the following line:
    // cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}