#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N people, each with an age a_i.
 * A person is "at risk" if age >= 80 or age <= 9.
 * We can vaccinate at most D people per day.
 * Constraint: We cannot mix "at risk" and "not at risk" people on the same day.
 * 
 * Strategy:
 * 1. Count the number of "at risk" people (risk_count) and "not at risk" people (safe_count).
 * 2. For each group, calculate the days required: ceil(count / D).
 *    Using integer arithmetic, ceil(x / y) is (x + y - 1) / y.
 * 3. Sum the days for both groups.
 * 
 * Complexity:
 * Time: O(N) per test case, where N is the number of people.
 * Space: O(1) extra space (excluding input storage).
 */

void solve() {
    int N;
    long long D;
    cin >> N >> D;
    
    int risk_count = 0;
    int safe_count = 0;
    
    for (int i = 0; i < N; ++i) {
        int age;
        cin >> age;
        if (age >= 80 || age <= 9) {
            risk_count++;
        } else {
            safe_count++;
        }
    }
    
    // Calculate days for risk group
    // Using long long to prevent any potential overflow, though not strictly necessary given constraints
    long long days_risk = (risk_count + D - 1) / D;
    
    // Calculate days for safe group
    long long days_safe = (safe_count + D - 1) / D;
    
    cout << (days_risk + days_safe) << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}