#include <bits/stdc++.h>
using namespace std;

// Function to check if string A is a subsequence of string B
bool isSubsequence(const string &a, const string &b) {
    int i = 0, j = 0;
    while (i < a.length() && j < b.length()) {
        if (a[i] == b[j]) {
            i++;
        }
        j++;
    }
    return i == a.length();
}

void solve() {
    string m, w;
    cin >> m >> w;
    
    // According to the rule, M must be a subsequence of W, 
    // or W must be a subsequence of M.
    if (isSubsequence(m, w) || isSubsequence(w, m)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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