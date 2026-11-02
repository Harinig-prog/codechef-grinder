#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * The operation allows us to remove a substring if every character in that 
 * substring appears an even number of times. 
 * 
 * If we can remove the entire string, it implies that every character in the 
 * original string must appear an even number of times. 
 * 
 * Proof sketch:
 * 1. If every character appears an even number of times, we can always remove 
 *    the entire string. In the simplest case, we can just remove the whole 
 *    string at once if the whole string satisfies the condition (which it does 
 *    by definition if all counts are even).
 * 2. If any character appears an odd number of times, it is impossible to 
 *    remove it. Each operation removes an even count of each character. 
 *    Subtracting an even number from an odd number will always result in an 
 *    odd number. Thus, the parity of the count of each character is invariant 
 *    under the operation. Since we want to reach an empty string (where all 
 *    counts are 0, which is even), we must start with all even counts.
 * 
 * Therefore, the condition is simply: every character in the string must 
 * appear an even number of times.
 */

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    // If the length is odd, it's impossible for all characters to have even counts.
    if (N % 2 != 0) {
        cout << "NO" << "\n";
        return;
    }

    // Count frequency of each character
    vector<int> freq(26, 0);
    for (char c : S) {
        freq[c - 'a']++;
    }

    // Check if all frequencies are even
    bool possible = true;
    for (int i = 0; i < 26; ++i) {
        if (freq[i] % 2 != 0) {
            possible = false;
            break;
        }
    }

    if (possible) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
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