#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Alice wants to maximize the number of '1's in the string.
 * She can choose one contiguous substring of '0's and flip them all to '1's.
 * 
 * Strategy:
 * 1. Count the total number of '1's already present in the string (let this be 'initial_ones').
 * 2. Identify all contiguous blocks of '0's.
 * 3. For each block of '0's, its length represents the number of additional '1's Alice can gain.
 * 4. The goal is to maximize (initial_ones + length_of_chosen_block_of_zeros).
 * 5. If there are no '0's, the answer is simply the total number of '1's (which is N).
 * 
 * Complexity:
 * Time: O(N) per test case, where N is the length of the string.
 * Space: O(N) to store the string.
 */

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int initial_ones = 0;
    for (char c : S) {
        if (c == '1') {
            initial_ones++;
        }
    }

    int max_zeros_block = 0;
    int current_zeros_block = 0;

    for (int i = 0; i < N; ++i) {
        if (S[i] == '0') {
            current_zeros_block++;
        } else {
            if (current_zeros_block > max_zeros_block) {
                max_zeros_block = current_zeros_block;
            }
            current_zeros_block = 0;
        }
    }
    // Check the last block if the string ends with '0's
    if (current_zeros_block > max_zeros_block) {
        max_zeros_block = current_zeros_block;
    }

    cout << initial_ones + max_zeros_block << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}