#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    // Define the number of holes for each uppercase letter 'A' through 'Z'.
    // A:1, B:2, C:0, D:1, E:0, F:0, G:0, H:0, I:0, J:0, K:0, L:0, M:0, 
    // N:0, O:1, P:1, Q:1, R:1, S:0, T:0, U:0, V:0, W:0, X:0, Y:0, Z:0
    int holes[26] = {
        1, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
        0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0
    };

    while (t--) {
        string s;
        cin >> s;
        long long total_holes = 0;
        for (char c : s) {
            total_holes += holes[c - 'A'];
        }
        cout << total_holes << "\n";
    }

    return 0;
}