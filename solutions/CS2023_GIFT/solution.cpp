#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Om has X rupees.
 * Laptop costs N rupees.
 * Gymkhana fund has M rupees.
 * Om can use the fund as much as he wants.
 * Therefore, the total amount Om can spend is X + M.
 * Om can buy the laptop if (X + M) >= N.
 * 
 * Constraints: 1 <= X, N, M <= 10^3.
 * Using long long is safe to prevent any potential overflow, 
 * though int is sufficient for these constraints.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // The problem description implies a single test case based on the input format,
    // but standard competitive programming practice suggests handling potential 
    // multiple inputs if the problem structure allows. Given the description:
    // "The first and only line of input contains three space-separated integers"
    // we read exactly one set of inputs.
    
    long long X, N, M;
    if (cin >> X >> N >> M) {
        if (X + M >= N) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}