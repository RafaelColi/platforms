#include <bits/stdc++.h>

using namespace std;

int n, k;
vector<int> a;

int min_i(int x) {
    int l = - 1, r = n, m;

    while(r > l + 1) {
        m = (l + r) / 2;

        if(a[m] >= x) {
            r = m;
        } else {
            l = m;
        }
    }

    return r;
}

int max_i(int x) {
    int l = - 1, r = n, m;

    while(r > l + 1) {
        m = (l + r) / 2;

        if(a[m] <= x) {
            l = m;
        } else {
            r = m;
        }
    }

    return l;
}

int main() {
    cin >> n;
    a.resize(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    cin >> k;

    for(int i = 0; i < k; i++) {
        int l, r;

        cin >> l >> r;

        l = min_i(l);
        r = max_i(r);

        cout << r - l + 1 << "\n";
    }

    return 0;
}