#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given a binary string S of length N. We want to rearrange S to maximize 
 * the length of the longest alternating substring.
 * 
 * Let count0 be the number of '0's and count1 be the number of '1's in S.
 * Without loss of generality, assume count0 <= count1.
 * 
 * To form an alternating string, we can place the '0's and '1's such that 
 * they alternate as much as possible.
 * If we have count0 zeros and count1 ones, we can create an alternating sequence 
 * by placing all count0 zeros and count0 ones in an alternating fashion:
 * 010101... (length 2 * count0).
 * We can then add one more '1' at the end or beginning to make it 2 * count0 + 1.
 * 
 * If count0 == count1, we can use all characters to form an alternating string 
 * of length count0 + count1 = N.
 * If count0 < count1, we can use all count0 zeros and (count0 + 1) ones to form 
 * an alternating string of length 2 * count0 + 1.
 * 
 * Thus, the maximum length is:
 * If count0 == count1: N
 * If count0 != count1: 2 * min(count0, count1) + 1
 */

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    int count0 = 0;
    int count1 = 0;
    for (char c : S) {
        if (c == '0') count0++;
        else count1++;
    }

    if (count0 == count1) {
        cout << N << "\n";
    } else {
        int min_count = min(count0, count1);
        cout << (2 * min_count + 1) << "\n";
    }
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