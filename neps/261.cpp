#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> f, p;

int bb(int x) {
    int l = -1, r = f.size(), mid;

    while(r > l + 1) {
        mid = (l + r) / 2;

        if(f[mid] <= x) {
            l = mid;
        } else {
            r = mid;
        }
    }

    
    return r;
}

int main() {
    cin >> n >> m;
    f.resize(n - 1);
    p.resize(n);

    for(int i = 0; i < f.size(); i++) {
        cin >> f[i];
    }

    for(int i = 0; i < p.size(); i++) {
        cin >> p[i];
    }

    for(int i = 0; i < m; i++) {
        int o;
        cin >> o;

        if(i < m - 1) {
            cout << p[bb(o)] << ' ';
        } else {
            cout << p[bb(o)] << '\n';
        }
    }

    return 0;
}