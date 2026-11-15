#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Each song has duration X.
 * The playlist consists of 3 songs: A, B, C.
 * One full cycle (A -> B -> C) takes 3 * X minutes.
 * 
 * To find how many times song C is listened to completely:
 * 1. Calculate the total number of songs listened to: total_songs = N / X.
 * 2. In every cycle of 3 songs, song C appears exactly once.
 * 3. The number of times song C is heard is the total number of full cycles 
 *    completed, plus 1 if the remainder of total_songs divided by 3 is 3 (which is impossible)
 *    or simply: total_songs / 3.
 * 
 * Example 1: N=6, X=1. Total songs = 6/1 = 6. 6 / 3 = 2. Correct.
 * Example 2: N=5, X=1. Total songs = 5/1 = 5. 5 / 3 = 1. Correct.
 * Example 3: N=11, X=2. Total songs = 11/2 = 5. 5 / 3 = 1. Correct.
 * Example 4: N=5, X=8. Total songs = 5/8 = 0. 0 / 3 = 0. Correct.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, x;
        cin >> n >> x;
        
        // Calculate total number of songs completed
        long long total_songs = n / x;
        
        // Each cycle of 3 songs contains exactly one C
        long long count_c = total_songs / 3;
        
        cout << count_c << "\n";
    }
    
    return 0;
}