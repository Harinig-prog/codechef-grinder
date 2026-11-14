#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has N hours of free time.
 * Each game takes 20 minutes.
 * Since there are 60 minutes in an hour, the number of games per hour is 60 / 20 = 3.
 * Therefore, in N hours, Chef can play N * 3 games.
 * 
 * Constraints:
 * 1 <= T <= 10
 * 1 <= N <= 10
 * The result will be at most 30, which fits comfortably in a standard integer.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long n;
        cin >> n;
        
        // Each hour has 60 minutes.
        // Each game takes 20 minutes.
        // Games per hour = 60 / 20 = 3.
        // Total games = N * 3.
        long long total_games = n * 3;
        
        cout << total_games << "\n";
    }
    
    return 0;
}