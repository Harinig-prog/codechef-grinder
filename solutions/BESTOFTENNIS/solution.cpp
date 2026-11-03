#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Let the final score be (X, Y).
 * The total number of sets played is S = X + Y.
 * The winner is the one with the higher score. Let M = max(X, Y) and m = min(X, Y).
 * The match stops when the loser cannot catch up even if they win all remaining sets.
 * Let N be the total number of sets in the "best of N" series.
 * The number of remaining sets is R = N - S.
 * The condition for stopping is that the loser's potential maximum score (m + R) 
 * is strictly less than the winner's current score (M).
 * So, m + (N - S) < M
 * N - S < M - m
 * N < M - m + S
 * Since N must be the smallest odd integer such that the match could have stopped at (X, Y),
 * and the match must have lasted at least S sets, we look for the smallest odd N >= S.
 * 
 * From the condition: N < M - m + X + Y
 * Substituting M = max(X, Y) and m = min(X, Y):
 * N < max(X, Y) - min(X, Y) + X + Y
 * If X > Y: N < X - Y + X + Y = 2X
 * If Y > X: N < Y - X + X + Y = 2Y
 * So N < 2 * max(X, Y).
 * 
 * Also, the match must have ended at S = X + Y.
 * The smallest odd integer N such that N >= X + Y and N < 2 * max(X, Y).
 * Actually, the problem implies N is the smallest odd number such that the 
 * condition "cannot win" is met.
 * Looking at the examples:
 * (2, 5): max=5, min=2. 2*max = 10. Odd numbers < 10 are 9, 7, 5... 
 * The largest one is 9.
 * (8, 10): max=10, min=8. 2*max = 20. Odd numbers < 20 are 19, 17... 
 * The largest one is 19.
 * (99, 1): max=99, min=1. 2*max = 198. Odd numbers < 198 are 197...
 * The largest one is 197.
 * 
 * The formula is: N = 2 * max(X, Y) - 1.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x, y;
        cin >> x >> y;
        
        long long m = max(x, y);
        long long n = 2 * m - 1;
        
        cout << n << "\n";
    }
    
    return 0;
}