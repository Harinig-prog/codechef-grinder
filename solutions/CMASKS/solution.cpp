#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Disposable masks: Cost X per day, lasts 1 day.
 * Total cost for 100 days = X * 100.
 * Cloth masks: Cost Y per 10 days, lasts 10 days.
 * Total cost for 100 days = (Y / 10) * 100 = Y * 10.
 * 
 * Comparison:
 * Cost_Disposable = X * 100
 * Cost_Cloth = Y * 10
 * 
 * Chef chooses Cloth if Cost_Cloth <= Cost_Disposable.
 * Otherwise, Chef chooses Disposable.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long x, y;
        cin >> x >> y;

        long long cost_disposable = x * 100;
        long long cost_cloth = y * 10;

        // If cloth cost is less than or equal to disposable cost, choose cloth.
        // The problem states: "In case there is a tie... choose the cloth masks."
        if (cost_cloth <= cost_disposable) {
            cout << "CLOTH" << "\n";
        } else {
            cout << "DISPOSABLE" << "\n";
        }
    }

    return 0;
}