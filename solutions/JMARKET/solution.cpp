#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Janmansh needs to buy X fruits in total, with at least 2 different kinds.
 * Let the prices be A, B, and C.
 * To minimize the cost, we should sort the prices such that p1 <= p2 <= p3.
 * 
 * To satisfy the condition of having at least 2 different kinds of fruits:
 * We must buy at least one fruit of the cheapest type (p1) and at least one 
 * fruit of the second cheapest type (p2).
 * 
 * Strategy:
 * 1. Sort the prices: p1 <= p2 <= p3.
 * 2. We need to buy X fruits total.
 * 3. We must buy at least one of p1 and at least one of p2.
 * 4. The remaining (X - 2) fruits should be bought at the cheapest possible price, 
 *    which is p1.
 * 5. Total cost = (1 * p1) + (1 * p2) + ((X - 2) * p1)
 *    Total cost = (X - 1) * p1 + p2.
 */

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        long long x;
        long long prices[3];
        cin >> x >> prices[0] >> prices[1] >> prices[2];

        // Sort the prices to easily identify the cheapest ones
        sort(prices, prices + 3);

        // p1 is the cheapest, p2 is the second cheapest
        long long p1 = prices[0];
        long long p2 = prices[1];

        // We buy 1 of p2, and the remaining (X-1) fruits as p1
        // This satisfies the condition of having at least 2 types 
        // (since X >= 2, we have at least one p1 and one p2)
        long long min_cost = (x - 1) * p1 + p2;

        cout << min_cost << "\n";
    }

    return 0;
}