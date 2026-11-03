#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * BMI = M / (H * H)
 * Given constraints: 1 <= M <= 10^4, 1 <= H <= 10^2.
 * H^2 will be at most 10^4.
 * The division M / H^2 is guaranteed to be an integer.
 * 
 * Categories:
 * BMI <= 18: Category 1
 * 19 <= BMI <= 24: Category 2
 * 25 <= BMI <= 29: Category 3
 * BMI >= 30: Category 4
 * 
 * Time Complexity: O(T) where T is the number of test cases.
 * Space Complexity: O(1) as we only use a few variables.
 */

int main() {
    // Fast I/O for performance
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    
    while (t--) {
        long long m, h;
        cin >> m >> h;
        
        // Calculate BMI using integer division as per problem guarantee
        long long bmi = m / (h * h);
        
        if (bmi <= 18) {
            cout << 1 << "\n";
        } else if (bmi >= 19 && bmi <= 24) {
            cout << 2 << "\n";
        } else if (bmi >= 25 && bmi <= 29) {
            cout << 3 << "\n";
        } else {
            // BMI >= 30
            cout << 4 << "\n";
        }
    }
    
    return 0;
}