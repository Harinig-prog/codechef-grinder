#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int groups = 0;
    bool in_group = false;
    
    for (char c : s) {
        if (c == '1') {
            if (!in_group) {
                groups++;
                in_group = true;
            }
        } else {
            in_group = false;
        }
    }
    
    cout << groups << "\n";
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