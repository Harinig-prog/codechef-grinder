#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long X, A, B;
    cin >> X >> A >> B;
    
    // Solubility at 100 degrees per 100 mL
    long long solubility_per_100ml = A + (100 - X) * B;
    
    // Total water is 1 liter = 1000 mL = 10 units of 100 mL
    long long total_sugar = solubility_per_100ml * 10;
    
    cout << total_sugar << "\n";
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