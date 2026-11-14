#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to track the cumulative scores of two players over N rounds.
 * After each round, we calculate the difference between the cumulative scores.
 * We keep track of the maximum lead encountered so far and which player held it.
 * 
 * Constraints:
 * N <= 10000
 * Si, Ti <= 1000
 * Max cumulative score = 10000 * 1000 = 10,000,000 (fits in int, but long long is safer)
 * Time Complexity: O(N)
 * Space Complexity: O(1)
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    if (!(cin >> n)) return 0;

    long long cumulative1 = 0;
    long long cumulative2 = 0;
    long long max_lead = 0;
    int winner = 0;

    for (int i = 0; i < n; ++i) {
        int s, t;
        cin >> s >> t;
        
        cumulative1 += s;
        cumulative2 += t;
        
        long long current_lead;
        int current_leader;
        
        if (cumulative1 > cumulative2) {
            current_lead = cumulative1 - cumulative2;
            current_leader = 1;
        } else {
            current_lead = cumulative2 - cumulative1;
            current_leader = 2;
        }
        
        if (current_lead > max_lead) {
            max_lead = current_lead;
            winner = current_leader;
        }
    }

    cout << winner << " " << max_lead << "\n";

    return 0;
}