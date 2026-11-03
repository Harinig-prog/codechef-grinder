#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given N sweets with calorie counts A_1, A_2, ..., A_N.
 * We have a limit K.
 * We must eat sweets in order (1st, 2nd, ...).
 * If adding the next sweet exceeds K, we stop immediately.
 * 
 * Approach:
 * Iterate through the array of sweets, maintaining a running sum of calories.
 * For each sweet, check if (current_sum + A_i) <= K.
 * If true, add A_i to the sum and increment the count of sweets eaten.
 * If false, break the loop.
 * 
 * Complexity:
 * Time: O(N) per test case, O(T * N) total. Given N <= 100 and T <= 100, this is well within the 1s limit.
 * Space: O(N) to store the array, or O(1) if processed on the fly.
 */

void solve() {
    int N;
    long long K;
    cin >> N >> K;
    
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    long long current_calories = 0;
    int count = 0;
    
    for (int i = 0; i < N; ++i) {
        if (current_calories + A[i] <= K) {
            current_calories += A[i];
            count++;
        } else {
            // Cannot eat this sweet or any further sweets
            break;
        }
    }
    
    cout << count << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}