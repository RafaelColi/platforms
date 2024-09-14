#include <bits/stdc++.h>

using namespace std;

int n, k;
vector<int> a;

int search(int x) {
    int l = - 1, r = n, m;

    while(r > l + 1) {
        m = (l + r) / 2;

        if(a[m] <= x) {
            l = m;
        } else {
            r = m;
        }
    }

    return l + 1;
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

        cout << search(x) << "\n";
    }

    return 0;
}