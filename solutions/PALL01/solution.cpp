#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: The Block Game (PALL01)
 * Approach: 
 * To check if a number is a palindrome, we can either:
 * 1. Read the number as a string and check if it reads the same forwards and backwards.
 * 2. Reverse the integer mathematically and compare it with the original.
 * 
 * Given the constraints and the nature of the problem, reading as a string 
 * is the most efficient and straightforward approach.
 */

void solve() {
    string n;
    cin >> n;
    
    string reversed_n = n;
    reverse(reversed_n.begin(), reversed_n.end());
    
    if (n == reversed_n) {
        cout << "wins" << "\n";
    } else {
        cout << "loses" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    
    return 0;
}