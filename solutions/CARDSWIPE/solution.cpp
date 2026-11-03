#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We need to track the number of people currently inside the office.
 * A swipe by an ID that is currently "out" means they are entering.
 * A swipe by an ID that is currently "in" means they are leaving.
 * We need to maintain the current count of people and track the maximum 
 * value this count reaches throughout the process.
 * 
 * Data Structure:
 * A boolean array or a hash set can track the status of each ID.
 * Since IDs are between 1 and N, a vector<bool> of size N+1 is efficient.
 * 
 * Complexity:
 * Time: O(N) per test case, O(Sum of N) total.
 * Space: O(N) to store the status of IDs.
 */

void solve() {
    int n;
    if (!(cin >> n)) return;
    
    // status[i] is true if person i is inside, false otherwise
    vector<bool> inside(n + 1, false);
    int current_people = 0;
    int max_people = 0;
    
    for (int i = 0; i < n; ++i) {
        int id;
        cin >> id;
        
        if (inside[id]) {
            // Person is leaving
            inside[id] = false;
            current_people--;
        } else {
            // Person is entering
            inside[id] = true;
            current_people++;
        }
        
        // Update the maximum observed count
        if (current_people > max_people) {
            max_people = current_people;
        }
    }
    
    cout << max_people << "\n";
}

int main() {
    // Fast I/O setup
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }
    return 0;
}