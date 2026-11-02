#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have N people at positions X_1, X_2, ..., X_N.
 * The virus spreads if the distance between two people is <= 2.
 * This is a chain reaction: if person A infects B, and B is within 2 of C, 
 * then C also gets infected.
 * 
 * Since N is very small (up to 8), we can simulate the process for each 
 * starting person i (from 0 to N-1).
 * 
 * For a fixed starting person i:
 * 1. The virus spreads to the left as long as X[j] - X[j-1] <= 2.
 * 2. The virus spreads to the right as long as X[j+1] - X[j] <= 2.
 * 
 * We calculate the size of the infected group for every possible starting 
 * person and find the min and max.
 */

void solve() {
    int N;
    cin >> N;
    vector<int> X(N);
    for (int i = 0; i < N; ++i) {
        cin >> X[i];
    }

    int min_infected = N;
    int max_infected = 1;

    for (int i = 0; i < N; ++i) {
        int current_infected = 1;
        
        // Spread to the right
        int curr = i;
        while (curr + 1 < N && (X[curr + 1] - X[curr] <= 2)) {
            current_infected++;
            curr++;
        }
        
        // Spread to the left
        curr = i;
        while (curr - 1 >= 0 && (X[curr] - X[curr - 1] <= 2)) {
            current_infected++;
            curr--;
        }
        
        if (current_infected < min_infected) {
            min_infected = current_infected;
        }
        if (current_infected > max_infected) {
            max_infected = current_infected;
        }
    }

    cout << min_infected << " " << max_infected << "\n";
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