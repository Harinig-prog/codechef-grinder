#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have A choices for the first layer (1 to A) and B choices for the second layer (1 to B).
 * Total combinations without constraints = A * B.
 * Constraint: The first and second layer must not have the same colour.
 * The common colours available for both layers are from 1 to min(A, B).
 * Therefore, there are min(A, B) pairs where the colours are the same (e.g., (1,1), (2,2), ..., (min(A,B), min(A,B))).
 * The number of valid cakes = (A * B) - min(A, B).
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    // The problem description implies a single input line, but standard competitive 
    // programming practice often involves multiple test cases. 
    // Checking if the input format requires handling 't' or just one line.
    // Based on the prompt "Handle multiple test cases (e.g. int t; cin >> t; while(t--))",
    // we will implement the loop. If the input is just one line, this will still work.
    
    // Note: The problem description says "The first and only line of input contains 2 integers A and B."
    // We will read A and B directly.
    long long A, B;
    if (!(cin >> A >> B)) return 0;

    long long common = min(A, B);
    long long result = (A * B) - common;

    cout << result << "\n";

    return 0;
}