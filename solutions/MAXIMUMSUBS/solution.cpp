#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The contest lasts for X minutes.
 * Total time in seconds = X * 60.
 * The participant cannot make a submission in the last 5 seconds.
 * Therefore, the effective time available for submissions is (X * 60) - 5 seconds.
 * A submission can be made every 30 seconds.
 * The number of submissions is the floor of (Total effective time / 30).
 * 
 * Formula: floor((X * 60 - 5) / 30)
 * 
 * Example X=1: (60 - 5) / 30 = 55 / 30 = 1.833 -> 1 submission?
 * Wait, let's re-read the sample.
 * Sample 1: X=1, Output=2.
 * My formula gives 1. Let's re-evaluate.
 * 
 * If X=1 (60 seconds), we can submit at 0s and 30s.
 * 0s is valid, 30s is valid. 60s is the end, but we can't submit in the last 5s (55s to 60s).
 * So at 0s and 30s, we have 2 submissions.
 * 
 * Let's check X=2 (120 seconds):
 * 0s, 30s, 60s, 90s. (4 submissions).
 * 
 * The logic is: Total seconds = X * 60.
 * We can submit at t = 0, 30, 60, 90, ...
 * We need t <= (X * 60 - 5).
 * Number of submissions = floor((X * 60 - 5) / 30) + 1 (because we start at 0).
 * Let's test:
 * X=1: floor(55/30) + 1 = 1 + 1 = 2. Correct.
 * X=2: floor(115/30) + 1 = 3 + 1 = 4. Correct.
 * X=3: floor(175/30) + 1 = 5 + 1 = 6. Correct.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x;
        cin >> x;
        
        // Total seconds available for submission window
        long long total_seconds = x * 60;
        
        // The last 5 seconds are forbidden.
        // We can submit at 0, 30, 60, ... up to the largest multiple of 30 <= (total_seconds - 5)
        long long max_time = total_seconds - 5;
        long long submissions = (max_time / 30) + 1;
        
        cout << submissions << "\n";
    }
    
    return 0;
}