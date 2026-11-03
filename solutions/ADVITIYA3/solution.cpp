#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N jars, each with A_i cookies. We need to choose one jar i such that
 * we can distribute A_i cookies among K children equally, with each child getting
 * at least 1 cookie.
 * 
 * If we choose jar i, we distribute x cookies per child such that x * K <= A_i.
 * The number of wasted cookies is A_i - (x * K).
 * To minimize waste, we want x * K to be as large as possible while x >= 1.
 * This is equivalent to A_i % K, provided A_i >= K.
 * 
 * If A_i < K for all i, it is impossible to give each child at least 1 cookie,
 * so we output -1.
 * Otherwise, we calculate A_i % K for all jars where A_i >= K and find the minimum.
 */

void solve() {
    int N;
    long long K;
    cin >> N >> K;
    
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    long long min_waste = -1;
    bool possible = false;
    
    for (int i = 0; i < N; ++i) {
        if (A[i] >= K) {
            long long waste = A[i] % K;
            if (!possible || waste < min_waste) {
                min_waste = waste;
                possible = true;
            }
        }
    }
    
    cout << min_waste << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}