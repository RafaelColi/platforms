#include <bits/stdc++.h>

using namespace std;

int n, q;
vector<int> chimps;

int lower(int x) {
    int l = -1, r = n, mid;

    while(r > l + 1) {
        mid = (l + r) / 2;

        if(chimps[mid] < x) {
            l = mid;
        } else {
            r = mid;
        }
    }

    return l;
}

int upper(int x) {
    int l = -1, r = n, mid;

    while(r > l + 1) {
        mid = (l + r) / 2;

        if(chimps[mid] <= x) {
            l = mid;
        } else {
            r = mid;
        }
    }

    return r;
}
int main() {
    cin >> n;
    chimps.resize(n);

    for(int i = 0; i < n; i++) {
        cin >> chimps[i];
    }

    cin >> q;

    for(int i = 0; i < q; i++) {
        int query;
        cin >> query;

        int l = lower(query), u = upper(query);

        if(l > -1 and l < n) {
            cout << chimps[l] << ' ';
        } else {
            cout << "X ";
        }

        if(u > -1 and u < n) {
            cout << chimps[u] << '\n';
        } else {
            cout << "X\n";
        }
    }

    return 0;
}