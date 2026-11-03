#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * A rectangle with sides 'a' and 'b' (where a, b are integers) has a perimeter 
 * of 2 * (a + b).
 * The constraint is that the total ink used must be at most N.
 * So, 2 * (a + b) <= N, which simplifies to (a + b) <= N / 2.
 * We want to maximize the area (a * b) subject to a + b <= floor(N / 2).
 * 
 * Let S = floor(N / 2). We want to maximize a * b subject to a + b <= S.
 * To maximize the product of two numbers with a fixed sum, the numbers should 
 * be as close to each other as possible.
 * If S is even, a = S/2, b = S/2.
 * If S is odd, a = floor(S/2), b = ceil(S/2).
 * 
 * If N < 4, we cannot form a rectangle with integral sides (minimum perimeter is 2*(1+1)=4),
 * so the area is 0.
 */

void solve() {
    long long N;
    cin >> N;

    // The perimeter 2*(a+b) must be <= N.
    // So a + b <= N / 2.
    long long S = N / 2;

    if (S < 2) {
        cout << 0 << "\n";
        return;
    }

    // To maximize a * b given a + b = S, we pick a = S/2 and b = S - a.
    long long a = S / 2;
    long long b = S - a;

    cout << a * b << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}