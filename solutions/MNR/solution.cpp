#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // Sort the array to easily access the smallest and largest elements.
    sort(a.begin(), a.end());
    
    // We can delete at most 2 elements. 
    // The extreme elements (smallest and largest) have the greatest impact on (max - min).
    // Therefore, the optimal strategy must involve deleting some combination of:
    // - 2 smallest elements
    // - 2 largest elements
    // - 1 smallest and 1 largest element
    
    // There are 3 possible scenarios after deleting at most 2 elements:
    // 1. Delete the 2 smallest elements: min is a[2], max is a[n-1]
    // 2. Delete the 2 largest elements: min is a[0], max is a[n-3]
    // 3. Delete 1 smallest and 1 largest element: min is a[1], max is a[n-2]
    
    long long ans1 = a[n - 1] - a[2];
    long long ans2 = a[n - 3] - a[0];
    long long ans3 = a[n - 2] - a[1];
    
    long long min_diff = min({ans1, ans2, ans3});
    cout << min_diff << "\n";
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