#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll emotes(ll lines, ll k) {
    if(lines <= k) {
        return lines * (lines + 1) / 2;
    }

    return k * k - (2 * k - 1 - lines) * (2 * k - lines) / 2;
}


int main() {
    int t;
    ll k, x;

    cin >> t;

    while(t--) {
        cin >> k >> x;

        ll l = 1;
        ll r = 2 * k - 1;
        ll lines = 2 * k - 1;

        while(l <= r) {
            ll mid = (l + r) / 2;

            if(emotes(mid, k) < x) {
                l = mid + 1;
            } else {
                lines = mid;
                r = mid - 1;
            }
        }

        cout << lines << "\n";
    }

    return 0;
}


/*

TIME LIMIT EXCEEDED

int main() {
    ll t, k, x;

    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> k >> x;

        ll total = 0, emotes = 1, lines = 0;

        for(ll j = 0; j < 2 * k - 1; j++) {
            if(total >= x) {
                break;
            } else {
                total += emotes;

                lines++;

                if(j < k - 1) {
                    emotes++;
                } else {
                    emotes--;
                }
            }
        }

        cout << lines << "\n";
    }

    return 0;
}

*/