#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem defines a hierarchy of eye colors:
 * Brown (R) > Blue (B) > Green (G).
 * 
 * Given two parents, the child's eye color is the "most common" (dominant) 
 * one between the two. This implies we simply need to return the character 
 * that is higher in the hierarchy: R > B > G.
 * 
 * Logic:
 * If either parent is 'R', the result is 'R'.
 * Else if either parent is 'B', the result is 'B'.
 * Else (both are 'G'), the result is 'G'.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char p1, p2;
    if (!(cin >> p1 >> p2)) return 0;

    // Determine the dominant color
    // Hierarchy: R > B > G
    if (p1 == 'R' || p2 == 'R') {
        cout << "R" << "\n";
    } else if (p1 == 'B' || p2 == 'B') {
        cout << "B" << "\n";
    } else {
        // Both must be 'G'
        cout << "G" << "\n";
    }

    return 0;
}