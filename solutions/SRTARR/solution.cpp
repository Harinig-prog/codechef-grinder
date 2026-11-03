#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // Count how many '10' transitions exist in the binary string.
    // A sorted binary string consists of some '0's followed by some '1's.
    // In terms of adjacent characters, a sorted string contains no '1' followed by '0' (i.e., "10").
    // Each operation can at most eliminate the transition from '1' to '0' by reversing it to '01'.
    // Specifically, every "10" substring can be thought of as contributing to the inversion count.
    // Actually, the minimum operations to sort a binary string is simply the count of occurrences of "10" in S.
    // Wait, let's verify:
    // If S = "1001", "10" appears at index 0 (S[0]='1', S[1]='0'). Count = 1. Ans = 1.
    // If S = "1010", "10" appears at index 0 and index 2. Count = 2. Ans = 2.
    // If S = "010101", "10" appears at indices 1, 3, 5. Count = 3? Wait, sample 4 output is 2.
    // Let's recheck Sample 4: 010101 -> output is 2.
    // Wait! Let's count "10" in "010101":
    // S[1..2] is '10'
    // S[3..4] is '10'
    // Total "10"s = 2.
    // Indices: S = 0 '1' 0 '1' 0 '1' -> wait, S[0]='0', S[1]='1', S[2]='0', S[3]='1', S[4]='0', S[5]='1'.
    // "10" occurs at (S[1],S[2]) and (S[3],S[4]). That is 2 times!
    // So the count of "10" substrings is indeed equal to the minimum operations.
    
    int count = 0;
    for (int i = 0; i < n - 1; ++i) {
        if (s[i] == '1' && s[i+1] == '0') {
            count++;
        }
    }
    cout << count << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}