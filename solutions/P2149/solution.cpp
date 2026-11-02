#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long A, B, X;
    cin >> A >> B >> X;

    long long red_area = A * B;
    long long blue_area = X * X;

    if (red_area <= blue_area) {
        cout << 0 << "\n";
    } else {
        // If we change one dimension, say A to 1, area becomes 1 * B.
        // If 1 * B <= blue_area or 1 * A <= blue_area, cost is 1.
        // Wait, can we always do it in 1 move? 
        // For example, if we change A to X, or B to 1, etc.
        // Let's check if changing just A can make A * B <= blue_area:
        // We need new_A * B <= blue_area => new_A <= blue_area / B.
        // Since dimensions must be positive integers, we need at least 1.
        // So if 1 * B <= blue_area, we can change A to something small (or 1), cost = 1.
        // Similarly, if A * 1 <= blue_area, cost = 1.
        // If even reducing one dimension to 1 doesn't work (i.e., 1 * A > blue_area and 1 * B > blue_area, which happens if min(A, B) > blue_area),
        // then we must change BOTH dimensions to 1 (or small enough), cost = 2.
        
        // Actually, let's check:
        // Can we do it in 1 move?
        // We can change A such that A' * B <= blue_area => A' <= blue_area / B (A' >= 1).
        // This is possible if 1 * B <= blue_area, i.e., B <= blue_area.
        // Or we can change B such that A * B' <= blue_area => B' <= blue_area / A.
        // This is possible if A * 1 <= blue_area, i.e., A <= blue_area.
        
        if (B <= blue_area || A <= blue_area) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
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