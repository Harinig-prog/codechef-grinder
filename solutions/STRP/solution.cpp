#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We want to minimize the number of operations to transfer string S.
 * An operation can send 1 or 2 copies of the same character.
 * If we have a sequence of identical characters, say 'aaaaa', we can group them:
 * 'aa', 'aa', 'a' -> 3 operations.
 * Basically, for any contiguous block of identical characters of length L,
 * we can process them in chunks of 2.
 * The number of operations for a block of length L is ceil(L / 2).
 * 
 * Example: 'eee' (L=3) -> 'ee', 'e' (2 operations). ceil(3/2) = 2.
 * Example: 'aabeee' -> 'aa' (1 op), 'b' (1 op), 'ee' (1 op), 'e' (1 op) = 4 ops.
 * 
 * Algorithm:
 * 1. Iterate through the string and identify contiguous blocks of identical characters.
 * 2. For each block of length L, add (L + 1) / 2 to the total count.
 */

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    if (N == 0) {
        cout << 0 << "\n";
        return;
    }

    long long total_ops = 0;
    int i = 0;
    while (i < N) {
        int j = i;
        // Find the end of the current block of identical characters
        while (j < N && S[j] == S[i]) {
            j++;
        }
        
        int length = j - i;
        // Each block of length L contributes ceil(L/2) operations
        total_ops += (length + 1) / 2;
        
        // Move to the next block
        i = j;
    }

    cout << total_ops << "\n";
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