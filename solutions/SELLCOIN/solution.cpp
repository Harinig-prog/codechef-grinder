#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef has A silver coins and B gold coins.
 * Each gold coin can be traded for 2 silver coins.
 * Each silver coin can be sold for Rs. 1.
 * 
 * Total silver coins after trading all gold coins:
 * Total Silver = A + (B * 2)
 * Since each silver coin sells for Rs. 1, the total money earned is:
 * Money = A + 2 * B
 * 
 * Input Format:
 * The problem specifies a single line containing A and B. 
 * There is no T (number of test cases) provided in the input.
 */

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long A, B;
    // Read A and B directly as per the problem statement
    if (cin >> A >> B) {
        // Calculate total money: A silver coins + (B gold coins * 2 silver/gold)
        long long total_money = A + (2 * B);
        cout << total_money << endl;
    }

    return 0;
}