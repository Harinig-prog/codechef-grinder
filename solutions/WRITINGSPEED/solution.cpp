#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    if (cin >> x) {
        // Rahul has a 5-page assignment and 60 minutes to complete it.
        // Time needed for 5 pages = 5 * X minutes.
        // He can complete it if 5 * X <= 60, which simplifies to X <= 12.
        if (5 * x <= 60) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}