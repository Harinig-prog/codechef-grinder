#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The problem states that for each language, there are 2 courses.
 * Given N languages, the total number of courses is 2 * N.
 * Constraints: 1 <= N <= 100.
 * The result will be at most 200, which fits comfortably in a standard integer.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single integer input N.
    // While the prompt mentions "Handle multiple test cases", the problem 
    // description provided only specifies a single integer input N.
    // We will read N and output 2 * N.
    
    int n;
    if (cin >> n) {
        long long total_courses = 2LL * n;
        cout << total_courses << "\n";
    }

    return 0;
}