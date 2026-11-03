#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We are given x and y, and we need to find the smallest integer z >= 1 
 * such that (x + y + z) is a prime number.
 * 
 * Constraints:
 * 1 <= T <= 1000
 * 1 <= x, y <= 1000
 * The sum (x + y + z) will be at most 1000 + 1000 + 2000 (a safe upper bound for prime search).
 * A simple primality test function is sufficient given the small constraints.
 */

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int x, y;
        cin >> x >> y;
        
        int sum = x + y;
        int z = 1;
        
        // Search for the smallest z >= 1 such that (sum + z) is prime
        while (true) {
            if (isPrime(sum + z)) {
                cout << z << "\n";
                break;
            }
            z++;
        }
    }
    
    return 0;
}