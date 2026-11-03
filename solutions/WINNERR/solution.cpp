#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int pa, pb, qa, qb;
        cin >> pa >> pb >> qa >> qb;
        
        int time_p = max(pa, pb);
        int time_q = max(qa, qb);
        
        if (time_p < time_q) {
            cout << "P\n";
        } else if (time_q < time_p) {
            cout << "Q\n";
        } else {
            cout << "TIE\n";
        }
    }
    
    return 0;
}