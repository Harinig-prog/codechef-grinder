#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N friends, each with a color C_i.
 * We visit all N friends exactly once.
 * A jolt occurs when the color on our face changes.
 * Initially, the face has no color.
 * 
 * Let the sequence of colors visited be S_1, S_2, ..., S_N.
 * - First visit: No color -> S_1 (Jolt)
 * - Subsequent visits: S_i -> S_{i+1} (Jolt if S_i != S_{i+1})
 * 
 * To minimize jolts, we should group all identical colors together.
 * If we have 'k' distinct colors present in the input, we can arrange the 
 * visits such that all friends of color X are visited consecutively, 
 * then all friends of color Y, and so on.
 * 
 * Example: Colors {1, 2, 1, 3, 2}
 * Distinct colors: {1, 2, 3}
 * Order: (1, 1, 2, 2, 3)
 * Jolts:
 * - None -> 1 (Jolt)
 * - 1 -> 1 (No)
 * - 1 -> 2 (Jolt)
 * - 2 -> 2 (No)
 * - 2 -> 3 (Jolt)
 * Total = 3.
 * 
 * The number of jolts is exactly the number of distinct colors present in the input.
 * If there are k distinct colors, we will have 1 jolt for the first color, 
 * and 1 jolt each time we switch to a new color group (k-1 switches).
 * Total jolts = 1 + (k - 1) = k.
 */

void solve() {
    int N;
    cin >> N;
    set<int> distinct_colors;
    for (int i = 0; i < N; ++i) {
        int c;
        cin >> c;
        distinct_colors.insert(c);
    }
    
    // The minimum number of jolts is equal to the number of distinct colors.
    cout << distinct_colors.size() << "\n";
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