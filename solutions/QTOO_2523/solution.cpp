#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We want to delete a subsequence of maximum length such that the remaining 
 * characters form a palindrome of length > 1.
 * Let the original string be S of length N.
 * If we keep a subsequence of length K that forms a palindrome, 
 * the number of deleted characters is N - K.
 * To maximize (N - K), we need to minimize K.
 * 
 * A palindrome of length > 1 exists if and only if there exists a character 
 * that appears at least twice in the string S.
 * If a character appears at least twice, say at indices i and j (i < j), 
 * we can keep these two characters to form a palindrome "cc". 
 * The length of the remaining string is 2, so K = 2.
 * The number of deleted characters is N - 2.
 * 
 * Are there any cases where we can form a palindrome of length > 2?
 * Yes, but that would result in a smaller number of deleted characters (N - K).
 * Since we want to maximize the deleted characters, we want the smallest 
 * possible palindrome length > 1, which is 2.
 * 
 * Therefore, the strategy is:
 * 1. Check if any character appears at least twice in the string.
 * 2. If yes, the maximum deleted length is N - 2.
 * 3. If no character appears twice (all characters are unique), it is 
 *    impossible to form a palindrome of length > 1, so output -1.
 */

void solve() {
    int N;
    cin >> N;
    string S;
    cin >> S;

    // Count frequencies of each character
    vector<int> freq(26, 0);
    bool possible = false;
    for (char c : S) {
        freq[c - 'a']++;
        if (freq[c - 'a'] >= 2) {
            possible = true;
        }
    }

    if (!possible) {
        cout << -1 << "\n";
    } else {
        // We keep 2 characters to form a palindrome, delete N-2
        cout << N - 2 << "\n";
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