#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef needs N pairs of shoes. Each pair consists of 1 left and 1 right shoe.
 * Total shoes needed: N left shoes and N right shoes.
 * Chef already has M left shoes.
 * 
 * Case 1: M >= N
 * Chef has enough left shoes. He only needs to buy N right shoes.
 * Total to buy = N.
 * 
 * Case 2: M < N
 * Chef needs (N - M) more left shoes and N right shoes.
 * Total to buy = (N - M) + N = 2N - M.
 * 
 * Both cases can be generalized:
 * If M >= N, result is N.
 * If M < N, result is 2N - M.
 */

void solve() {
    long long N, M;
    if (!(cin >> N >> M)) return;
    
    if (M >= N) {
        cout << N << "\n";
    } else {
        cout << (2 * N - M) << "\n";
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