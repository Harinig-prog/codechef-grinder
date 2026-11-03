#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long R, B;
    if (!(cin >> R >> B)) return;

    // Each green orb costs 1 Red + 1 Blue.
    // Making one green orb gives 5 skill.
    // Not making it (keeping 1 Red and 1 Blue) gives 1 + 2 = 3 skill.
    // Net gain per green orb created is 5 - 3 = 2 skill.
    // Since R and B are very small (<= 10), we can just greedily make as many green orbs as possible.
    
    long long green = min(R, B);
    R -= green;
    B -= green;

    long long total_skill = green * 5 + R * 1 + B * 2;
    cout << total_skill << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // The problem statement says "The first and only line of input contains 2 integers" 
    // but standard competitive programming often has multiple test cases. 
    // Let's check if there is a test case count or just one. 
    // Wait, the input format says "The first and only line of input contains 2 integers". 
    // So there is only 1 test case per execution.
    solve();
    
    return 0;
}