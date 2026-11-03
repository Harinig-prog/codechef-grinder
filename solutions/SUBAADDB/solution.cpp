#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We start with a string of length N.
 * In each step, we replace a substring of length A with a substring of length B.
 * The net change in length per operation is (B - A).
 * Since B < A, the length decreases by (A - B) in each step.
 * We continue this as long as the current length L >= A.
 * 
 * Let L be the current length.
 * While L >= A:
 *    L = L - A + B
 * 
 * This is equivalent to finding the smallest L such that L < A, 
 * where L = N - k * (A - B) for some non-negative integer k.
 * 
 * Since N is small (up to 100), a simple while loop is perfectly efficient.
 */

void solve() {
    int N, A, B;
    if (!(cin >> N >> A >> B)) return;

    // The process continues as long as the current length is at least A.
    // Each operation reduces the length by (A - B).
    int current_length = N;
    int diff = A - B;

    while (current_length >= A) {
        current_length -= diff;
    }

    cout << current_length << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}