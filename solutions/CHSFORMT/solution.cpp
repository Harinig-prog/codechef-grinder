#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        int total = a + b;

        if (total < 3) {
            cout << 1 << "\n";
        } else if (total >= 3 && total <= 10) {
            cout << 2 << "\n";
        } else if (total >= 11 && total <= 60) {
            cout << 3 << "\n";
        } else {
            cout << 4 << "\n";
        }
    }

    return 0;
}