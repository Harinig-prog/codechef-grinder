#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef needs to write X pages.
 * He already has Y pages available.
 * He needs (X - Y) more pages. If X <= Y, he needs 0 more pages.
 * He has a budget of K rubles.
 * He has N notebooks, each with Pi pages and Ci cost.
 * 
 * Conditions to buy a notebook:
 * 1. The notebook must have enough pages: Pi >= (X - Y)
 * 2. The notebook must be within budget: Ci <= K
 * 
 * If X <= Y, Chef doesn't need a new notebook, but the problem implies he wants to buy one.
 * Actually, if X <= Y, he needs 0 pages. Any notebook with Pi >= 0 and Ci <= K works.
 * However, the problem states he wants to write X pages and has Y pages left.
 * If X <= Y, he needs 0 additional pages. Any notebook with Pi >= 0 and Ci <= K is valid.
 * The logic (X - Y) handles this naturally if we treat the requirement as max(0, X - Y).
 */

void solve() {
    int X, Y, K, N;
    if (!(cin >> X >> Y >> K >> N)) return;

    int pages_needed = max(0, X - Y);
    bool found = false;

    for (int i = 0; i < N; ++i) {
        int Pi, Ci;
        cin >> Pi >> Ci;
        // Check if this notebook satisfies the requirement
        if (Pi >= pages_needed && Ci <= K) {
            found = true;
        }
    }

    if (found) {
        cout << "LuckyChef" << "\n";
    } else {
        cout << "UnluckyChef" << "\n";
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