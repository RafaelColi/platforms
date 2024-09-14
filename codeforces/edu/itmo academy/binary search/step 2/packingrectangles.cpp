#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll w, h, n;

bool valid(ll x) {
    return floor(x / w) * floor(x / h) >= n;
}

int main() {
    cin >> w >> h >> n;

    ll l = 0, r = 1;

    while(!valid(r)) {
        r *= 2;
    }

    while(r > l + 1) {
        ll m = (l + r) / 2;

        if(valid(m)) {
            r = m;
        } else {
            l = m;
        }
    }

    cout << r << "\n";

    return 0;
}