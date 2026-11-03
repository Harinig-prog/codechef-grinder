#include <bits/stdc++.h>
using namespace std;

/**
 * Problem Analysis:
 * We have X total people, Y of whom are infected.
 * Infected people (Y) cannot be adjacent to anyone (infected or healthy).
 * This means each infected person effectively requires a "buffer" room.
 * 
 * Strategy:
 * 1. Each infected person (Y) needs their own room. To ensure no one is adjacent,
 *    we can place them in a pattern like: [C] [_] [C] [_] [C] ...
 *    If we have Y infected people, we need Y rooms for them and (Y-1) buffer rooms 
 *    between them. However, if we have healthy people, we can use them as buffers 
 *    or place them in separate rooms.
 * 
 * 2. Let's place the Y infected people first. To minimize space, we place them 
 *    with one empty room between each: C _ C _ C ...
 *    This takes (2*Y - 1) rooms.
 *    Wait, if Y=0, we just need X rooms.
 *    If Y > 0, we have Y infected people. They occupy Y rooms and require 
 *    (Y-1) empty rooms between them to satisfy the condition.
 *    Total rooms for Y infected = Y + (Y - 1) = 2Y - 1.
 *    After placing these, we have (X - Y) healthy people left.
 *    We can place the healthy people in the remaining space or add new rooms.
 *    Actually, the most efficient way is:
 *    - Place Y infected people: C _ C _ C ... (takes 2Y - 1 rooms).
 *    - If we have healthy people (X-Y), we can place them in the empty slots 
 *      or add new rooms.
 *    - If Y > 0:
 *      Total rooms = (2 * Y) + (X - Y)
 *      Wait, let's re-evaluate:
 *      Each infected person needs a room, and the room next to them must be empty.
 *      If we have Y infected people, we need at least Y rooms for them, and 
 *      Y empty rooms to act as buffers (except the last one doesn't strictly need 
 *      a buffer after it, but the problem implies no one can be adjacent).
 *      Actually, the simplest logic:
 *      If Y == 0: result is X.
 *      If Y > 0:
 *        We have Y infected people. They take Y rooms.
 *        They need Y empty buffer rooms to ensure no one is adjacent to them.
 *        Total rooms = Y (infected) + Y (buffers) + (X - Y) (healthy)
 *        = X + Y.
 *        Wait, check sample 2: X=5, Y=3. Output 8. 5+3=8. Correct.
 *        Check sample 3: X=3, Y=3. Output 5. 3+3=6? No, 5.
 *        The formula is: 
 *        If Y == X, we need Y rooms for infected + (Y-1) buffers = 2Y - 1.
 *        If Y < X, we have (X-Y) healthy people. We can place them in the buffer 
 *        slots or elsewhere. The infected people take 2Y rooms (C + buffer), 
 *        except the last one doesn't need a buffer if we don't want it to.
 *        Actually, the logic is: 
 *        If Y > 0, we need 2*Y rooms to accommodate the infected and their buffers.
 *        Then we add the remaining (X-Y) healthy people.
 *        Total = 2*Y + (X-Y) = X + Y.
 *        Exception: If Y == X, the last buffer isn't needed. 2Y - 1.
 */

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;

        if (y == 0) {
            cout << x << "\n";
        } else if (x == y) {
            cout << (2 * y - 1) << "\n";
        } else {
            // x > y and y > 0
            // We have y infected, they take 2*y rooms (C + buffer).
            // We have (x-y) healthy people, they can fill the buffers or take new rooms.
            // Actually, the healthy people can be placed anywhere NOT adjacent to C.
            // The most efficient is to use the buffers for healthy people.
            // If we have y infected, we have y-1 buffers between them.
            // We can put healthy people in those y-1 buffers.
            // If we still have healthy people, we add them at the end.
            cout << (x + y) << "\n";
        }
    }
    return 0;
}