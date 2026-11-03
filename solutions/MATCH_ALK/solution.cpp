#include <bits/stdc++.h>
using namespace std;

void solve() {
    int best_player = -1;
    int max_points = -1;

    for (int i = 1; i <= 22; ++i) {
        int runs, wickets;
        cin >> runs >> wickets;
        int points = runs + (wickets * 20);
        if (points > max_points) {
            max_points = points;
            best_player = i;
        }
    }
    cout << best_player << "\n";
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