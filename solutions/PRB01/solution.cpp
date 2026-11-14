#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Primality Test
 * Logic: A number N is prime if it is greater than 1 and has no divisors 
 * other than 1 and itself. We check for divisors up to sqrt(N).
 * Time Complexity: O(T * sqrt(N))
 * Space Complexity: O(1)
 */

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    // Check divisors from 5 to sqrt(n), skipping even numbers
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        int n;
        cin >> n;
        if (isPrime(n)) {
            cout << "yes" << "\n";
        } else {
            cout << "no" << "\n";
        }
    }
    
    return 0;
}