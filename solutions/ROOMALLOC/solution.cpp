#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each college has A_i members.
 * Each room can hold at most 2 people.
 * People from different colleges cannot share a room.
 * 
 * For a college with A_i members:
 * - If A_i is even, we need A_i / 2 rooms.
 * - If A_i is odd, we need (A_i + 1) / 2 rooms.
 * This can be simplified using integer division: (A_i + 1) / 2.
 * 
 * Total rooms = Sum of rooms needed for each college.
 * Constraints: N <= 100, A_i <= 100. The total sum will easily fit in a standard integer.
 */

void solve() {
    int N;
    cin >> N;
    long long total_rooms = 0;
    for (int i = 0; i < N; ++i) {
        int A;
        cin >> A;
        // Each room holds at most 2 people.
        // If A is odd, (A+1)/2 is the same as ceil(A/2.0).
        // If A is even, A/2 is the same as (A+1)/2 using integer division.
        total_rooms += (A + 1) / 2;
    }
    cout << total_rooms << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}