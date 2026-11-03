#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Utkarsh and Placement tests
 * Approach: 
 * Since there are only 3 companies (A, B, C) and a fixed preference order,
 * we can store the preference order in a way that allows us to compare
 * the two offers (x and y) easily.
 * 
 * We can assign a rank to each company based on the preference order:
 * first -> rank 0
 * second -> rank 1
 * third -> rank 2
 * 
 * Then, we simply compare the ranks of the two offered companies x and y.
 * The company with the smaller rank is the one Utkarsh prefers.
 */

void solve() {
    char p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    
    char x, y;
    cin >> x >> y;
    
    // Create a map or simple logic to determine rank
    auto get_rank = [&](char c) {
        if (c == p1) return 0;
        if (c == p2) return 1;
        return 2;
    };
    
    if (get_rank(x) < get_rank(y)) {
        cout << x << "\n";
    } else {
        cout << y << "\n";
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