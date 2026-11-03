#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have a rectangular plot of size N x M.
 * We need to divide it into the minimum number of identical square plots.
 * Let the side length of the square be 's'.
 * For the squares to divide the land perfectly, 's' must be a common divisor of N and M.
 * To minimize the number of squares, we need to maximize the area of each square.
 * Maximizing the area of the square is equivalent to maximizing its side length 's'.
 * Therefore, 's' must be the Greatest Common Divisor (GCD) of N and M.
 * 
 * The number of squares along the length N will be (N / s).
 * The number of squares along the breadth M will be (M / s).
 * The total number of squares will be (N / s) * (M / s).
 * 
 * Time Complexity: O(T * log(min(N, M))) due to the Euclidean algorithm for GCD.
 * Space Complexity: O(1).
 */

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, m;
        cin >> n >> m;

        // Calculate the side of the largest possible square
        long long side = gcd(n, m);

        // Calculate the number of squares
        // Total area = N * M
        // Area of one square = side * side
        // Number of squares = (N * M) / (side * side)
        // Which simplifies to (N / side) * (M / side)
        long long result = (n / side) * (m / side);

        cout << result << "\n";
    }

    return 0;
}