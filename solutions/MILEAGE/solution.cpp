#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Distance to travel: N
 * Petrol: Price X per litre, Mileage A km/litre.
 * Diesel: Price Y per litre, Mileage B km/litre.
 * 
 * Litres of petrol needed = N / A
 * Cost of petrol = (N / A) * X
 * 
 * Litres of diesel needed = N / B
 * Cost of diesel = (N / B) * Y
 * 
 * To avoid floating point precision issues, we can compare:
 * (N * X) / A  vs  (N * Y) / B
 * Multiply both sides by (A * B):
 * (N * X * B)  vs  (N * Y * A)
 * Since N > 0, we can divide by N:
 * (X * B)  vs  (Y * A)
 * 
 * This comparison avoids division and floating point arithmetic entirely.
 */

void solve() {
    long long N, X, Y, A, B;
    if (!(cin >> N >> X >> Y >> A >> B)) return;

    // Cost of petrol = (N * X) / A
    // Cost of diesel = (N * Y) / B
    // Compare (N * X) / A and (N * Y) / B
    // Equivalent to comparing (N * X * B) and (N * Y * A)
    
    long long petrol_cost_scaled = N * X * B;
    long long diesel_cost_scaled = N * Y * A;

    if (petrol_cost_scaled < diesel_cost_scaled) {
        cout << "PETROL" << "\n";
    } else if (diesel_cost_scaled < petrol_cost_scaled) {
        cout << "DIESEL" << "\n";
    } else {
        cout << "ANY" << "\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}