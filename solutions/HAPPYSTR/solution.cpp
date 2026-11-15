#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Chef and Happy String
 * Logic: We need to find if there exists a contiguous substring of vowels 
 * with length > 2. This is equivalent to checking if there is a sequence 
 * of at least 3 consecutive vowels in the string.
 */

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void solve() {
    string s;
    cin >> s;
    
    int consecutive_vowels = 0;
    bool happy = false;
    
    for (char c : s) {
        if (isVowel(c)) {
            consecutive_vowels++;
            if (consecutive_vowels > 2) {
                happy = true;
                break;
            }
        } else {
            consecutive_vowels = 0;
        }
    }
    
    if (happy) {
        cout << "Happy" << "\n";
    } else {
        cout << "Sad" << "\n";
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