#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Alice needs to reach a score A' such that A' >= B + 10.
 * Let the difference needed be D = (B + 10) - A.
 * If D <= 0, Alice already has a dominant victory, so 0 shots are needed.
 * If D > 0, Alice needs to score at least D points using shots of 2 or 3.
 * To minimize the number of shots, Alice should prioritize 3-pointers.
 * 
 * Let x be the number of 3-pointers and y be the number of 2-pointers.
 * We want to minimize (x + y) such that 3x + 2y >= D.
 * Since 3 points per shot is more efficient than 2, we should use as many 3s as possible.
 * 
 * We can calculate the minimum shots by checking how many 3-pointers are needed.
 * If D is divisible by 3, shots = D / 3.
 * If D % 3 == 1, we can take one 2-pointer and (D-2)/3 3-pointers (if D >= 2),
 * or just two 2-pointers (if D=1, 2+2=4 > 1).
 * Actually, a simpler way:
 * If D <= 0, return 0.
 * Otherwise, we want to reach D points.
 * If D % 3 == 0, shots = D / 3.
 * If D % 3 == 1, shots = (D / 3) + 1 (e.g., D=1 -> 1 shot of 2, D=4 -> 1 shot of 3 + 1 shot of 2).
 * If D % 3 == 2, shots = (D / 3) + 1 (e.g., D=2 -> 1 shot of 2, D=5 -> 1 shot of 3 + 1 shot of 2).
 */

void solve() {
    long long A, B;
    cin >> A >> B;
    
    long long target = B + 10;
    if (A >= target) {
        cout << 0 << "\n";
        return;
    }
    
    long long diff = target - A;
    // We need to cover 'diff' points using 2s and 3s.
    // To minimize shots, use as many 3s as possible.
    long long shots = 0;
    if (diff % 3 == 0) {
        shots = diff / 3;
    } else {
        shots = (diff / 3) + 1;
    }
    
    cout << shots << "\n";
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