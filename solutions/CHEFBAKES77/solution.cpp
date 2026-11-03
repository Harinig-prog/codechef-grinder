#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N cakes, each weighing X kg.
 * Each vehicle can carry at most Y kg.
 * Since each cake weighs X kg, the number of cakes that can fit in one vehicle is floor(Y / X).
 * Let k = floor(Y / X) be the number of cakes per vehicle.
 * To transport N cakes, we need ceil(N / k) vehicles.
 * 
 * Using integer arithmetic:
 * ceil(N / k) can be calculated as (N + k - 1) / k.
 */

void solve() {
    long long N, X, Y;
    if (!(cin >> N >> X >> Y)) return;

    // Number of cakes per vehicle
    long long cakes_per_vehicle = Y / X;

    // Minimum vehicles needed = ceil(N / cakes_per_vehicle)
    // Using integer division: (N + cakes_per_vehicle - 1) / cakes_per_vehicle
    long long vehicles_needed = (N + cakes_per_vehicle - 1) / cakes_per_vehicle;

    cout << vehicles_needed << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case per run based on the format,
    // but standard competitive programming practice for "multiple test cases" 
    // usually involves a T variable. Given the constraints and description, 
    // we handle the input as provided.
    
    int t = 1; 
    // If the input format actually contains a number of test cases, 
    // one would uncomment the following:
    // cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}