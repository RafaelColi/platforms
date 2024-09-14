#include <bits/stdc++.h>

using namespace std;

int n, k;
vector<int> a;

bool search(int x) {
    int l = - 1, r = n, m;

    while(r > l + 1) {
        m = (l + r) / 2;

        if(a[m] >= x) {
            r = m;
        } else {
            l = m;
        }
    }

    return a[r] == x;
}

int main() {
    cin >> n >> k;

    a.resize(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < k; i++) {
        int x;

        cin >> x;

        if(search(x)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}