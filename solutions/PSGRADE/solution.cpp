#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Passing Marks
 * The problem requires checking four conditions:
 * 1. A >= A_min
 * 2. B >= B_min
 * 3. C >= C_min
 * 4. A + B + C >= T_min
 * 
 * All conditions must be true for the student to pass.
 * Constraints are small (up to 300), so standard int is sufficient.
 */

void solve() {
    int A_min, B_min, C_min, T_min, A, B, C;
    if (!(cin >> A_min >> B_min >> C_min >> T_min >> A >> B >> C)) return;

    // Check individual subject requirements
    bool pass_subjects = (A >= A_min) && (B >= B_min) && (C >= C_min);
    
    // Check total score requirement
    bool pass_total = (A + B + C >= T_min);

    if (pass_subjects && pass_total) {
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}