#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;

    int coins[n], sum[n], total = 0, ans = 0;

    for(int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    if(n > 1) {
        sort(coins, coins + n);
    }

    sum[0] = coins[0];

    for(int i = 1; i < n; i++) {
        sum[i] = sum[i - 1] + coins[i];
    }

    for(int i = n - 1; i >= 0; i--) {
        total += coins[i];
        ans++;

        if(total > sum[i] - coins[i]) {
            cout << ans << "\n";
            return 0;
        }
    }

    return 0;
}