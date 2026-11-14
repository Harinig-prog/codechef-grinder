#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N friends who want to join a course.
 * The course has a maximum capacity M.
 * K students are already registered.
 * The number of remaining seats is (M - K).
 * All N friends can register if and only if the number of remaining seats 
 * is greater than or equal to the number of friends (N).
 * Condition: N <= M - K
 * Which is equivalent to: N + K <= M
 * 
 * Constraints:
 * T <= 1000
 * 1 <= N <= M <= 100
 * 0 <= K <= M
 * Since N, M, K are small (up to 100), standard int is sufficient.
 */

int main() {
    // Optimize I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        // Check if the total number of students (N + K) exceeds capacity M
        if (n + k <= m) {
            cout << "Yes" << "\n";
        } else {
            cout << "No" << "\n";
        }
    }
    
    return 0;
}