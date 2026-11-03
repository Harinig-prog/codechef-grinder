#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // A 30-day month starting with Day 1 as Monday.
    // Day 1: Mon
    // Day 2: Tue
    // Day 3: Wed
    // Day 4: Thu
    // Day 5: Fri
    // Day 6: Sat
    // Day 7: Sun
    // So days where (day % 7 == 6) or (day % 7 == 0) are Saturdays and Sundays respectively.
    
    set<int> holidays;
    // Add weekends
    for (int day = 1; day <= 30; day++) {
        if (day % 7 == 6 || day % 7 == 0) {
            holidays.insert(day);
        }
    }

    // Add festival days
    for (int i = 0; i < n; i++) {
        holidays.insert(a[i]);
    }

    cout << holidays.size() << "\n";
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