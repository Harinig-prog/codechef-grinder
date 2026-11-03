#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * Chef is student 1 with marks A[1].
 * To ensure Chef passes, the cutoff X must satisfy X <= A[1].
 * The professor wants to minimize the number of students who pass.
 * A student i passes if A[i] >= X.
 * To minimize the number of passing students, we want to make X as large as possible
 * while still keeping X <= A[1].
 * The largest possible value for X is A[1].
 * If we set X = A[1], then any student i passes if A[i] >= A[1].
 * We simply count how many students satisfy A[i] >= A[1].
 */

void solve() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Chef is student 1 (index 0 in our vector)
    int chef_marks = A[0];
    
    // We set the cutoff X = chef_marks.
    // Any student i passes if A[i] >= chef_marks.
    int passing_count = 0;
    for (int i = 0; i < N; ++i) {
        if (A[i] >= chef_marks) {
            passing_count++;
        }
    }
    
    cout << passing_count << "\n";
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        solve();
    }
    return 0;
}