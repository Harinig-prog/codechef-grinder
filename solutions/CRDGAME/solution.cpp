#include <bits/stdc++.h>
using namespace std;

/**
 * Problem: Chef and Card Game
 * The power of a card is the sum of its digits.
 * We need to calculate the sum of digits for each card, compare them,
 * and track the total points for Chef and Morty.
 */

// Function to calculate the sum of digits of a number
long long get_power(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += (n % 10);
        n /= 10;
    }
    return sum;
}

void solve() {
    int N;
    cin >> N;
    
    int chef_points = 0;
    int morty_points = 0;
    
    for (int i = 0; i < N; ++i) {
        long long A, B;
        cin >> A >> B;
        
        long long power_A = get_power(A);
        long long power_B = get_power(B);
        
        if (power_A > power_B) {
            chef_points++;
        } else if (power_B > power_A) {
            morty_points++;
        } else {
            // If powers are equal, both get a point
            chef_points++;
            morty_points++;
        }
    }
    
    if (chef_points > morty_points) {
        cout << 0 << " " << chef_points << "\n";
    } else if (morty_points > chef_points) {
        cout << 1 << " " << morty_points << "\n";
    } else {
        cout << 2 << " " << chef_points << "\n";
    }
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