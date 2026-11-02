#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef is happy if the bus is not full.
 * The bus is full if the number of students (N) equals the number of seats (M).
 * The bus is not full if N < M.
 * 
 * Constraints: 1 <= N <= M <= 10.
 * Since N <= M is guaranteed, we only need to check if N < M.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case per run based on the input format,
    // but standard competitive programming practice often involves handling multiple test cases.
    // Given the input format "The only line of input will contain...", we read N and M once.
    
    long long N, M;
    if (cin >> N >> M) {
        if (N < M) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}