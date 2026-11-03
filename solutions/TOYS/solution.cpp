#include <iostream>
#include <algorithm>

using namespace std;

/**
 * Problem Analysis:
 * Chef starts with N toys.
 * Each day, if he has at least one toy, he plays with one and breaks it.
 * This means he loses 1 toy per day, provided he has toys remaining.
 * After M days, the number of toys remaining will be:
 * max(0, N - M)
 * 
 * Input Format Correction:
 * The problem does not specify a number of test cases (T). 
 * It provides a single line with N and M.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n, m;
    // Read N and M directly as per the problem statement
    if (cin >> n >> m) {
        // Calculate remaining toys
        // If M >= N, he breaks all toys, leaving 0.
        // If M < N, he breaks M toys, leaving N - M.
        long long remaining = (n > m) ? (n - m) : 0;
        
        cout << remaining << endl;
    }

    return 0;
}