#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: EZSPEAK
 * Logic: Iterate through the string and maintain a counter of consecutive consonants.
 * If the counter reaches 4, the word is hard to pronounce.
 * Vowels are {a, e, i, o, u}.
 */

bool is_vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int consecutive_consonants = 0;
    bool easy = true;

    for (int i = 0; i < n; ++i) {
        if (!is_vowel(s[i])) {
            consecutive_consonants++;
            if (consecutive_consonants >= 4) {
                easy = false;
                break;
            }
        } else {
            consecutive_consonants = 0;
        }
    }

    if (easy) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}