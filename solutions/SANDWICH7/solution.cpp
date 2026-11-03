#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef needs 2 pieces of bread for every sandwich.
 * Chef needs 1 piece of filling (either ham or cheese) for every sandwich.
 * 
 * Let S be the number of sandwiches.
 * Constraint 1: 2 * S <= B  => S <= B / 2
 * Constraint 2: S <= H + C (Total fillings available)
 * 
 * Therefore, the maximum number of sandwiches is min(B / 2, H + C).
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description does not explicitly state multiple test cases,
    // but the instructions ask to handle them properly. 
    // Given the input format "The first line contains 3 integers", 
    // we assume a single test case per run.
    
    long long B, H, C;
    if (!(cin >> B >> H >> C)) return 0;

    // Calculate max sandwiches based on bread constraint
    long long max_bread_sandwiches = B / 2;
    
    // Calculate max sandwiches based on filling constraint
    long long max_filling_sandwiches = H + C;
    
    // The answer is the minimum of the two constraints
    long long result = min(max_bread_sandwiches, max_filling_sandwiches);
    
    cout << result << "\n";

    return 0;
}