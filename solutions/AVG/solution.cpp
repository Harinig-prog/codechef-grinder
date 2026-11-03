#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long N, K, V;
    cin >> N >> K >> V;
    
    long long sum_A = 0;
    for (int i = 0; i < N; i++) {
        long long a;
        cin >> a;
        sum_A += a;
    }
    
    // Total sum of all (N + K) elements must be (N + K) * V
    // sum_A + K * X = (N + K) * V, where X is the value of each deleted element
    // K * X = (N + K) * V - sum_A
    
    long long total_sum = (N + K) * V;
    long long required_sum = total_sum - sum_A;
    
    // Check if required_sum is strictly positive and divisible by K
    if (required_sum > 0 && required_sum % K == 0) {
        cout << required_sum / K << "\n";
    } else {
        cout << -1 << "\n";
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