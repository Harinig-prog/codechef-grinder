#include <bits/stdc++.h>
using namespace std;

int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    if (cin >> x) {
        if (x >= 60) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}