#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t, x, y;
    cin >> t;

    while(t--) {
        cin >> y >> x;
        unsigned long long dp;

        if(y > x) {
            dp = y * (y - 1) + 1;

            if(y % 2) {
                cout << dp - (y - x) << '\n';
            } else {
                cout << dp + (y - x) << '\n';
            }
            
        } else {
            dp = x * (x - 1) + 1;

            if(x % 2) {
                cout << dp + (x - y) << '\n';
            } else {
                cout << dp - (x - y) << '\n';
            }
        }
    }
    return 0;
}