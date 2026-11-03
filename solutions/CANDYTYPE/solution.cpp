#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> count(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        count[a]++;
    }

    int max_freq = 0;
    int best_color = 1;

    for (int i = 1; i <= n; ++i) {
        if (count[i] > max_freq) {
            max_freq = count[i];
            best_color = i;
        }
    }

    cout << best_color << "\n";
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