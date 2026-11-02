#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    unordered_map<int, int> freq;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        freq[x]++;
    }

    int max_freq = 0;
    for (auto& pair : freq) {
        max_freq = max(max_freq, pair.second);
    }

    int count_max = 0;
    for (auto& pair : freq) {
        if (pair.second == max_freq) {
            count_max++;
        }
    }

    if (count_max == 1) {
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