#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ans = 0;

    cin >> n;

    while(n--) {
        int count = 0, sol;

        for(int i = 0; i < 3; i++) {
            cin >> sol;

            if(sol) {
                count++;
            }
        }

        if(count >= 2) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}