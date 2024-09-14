#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll n, k;
vector<int> a;

bool valid(double x) {
    int s = 0;

    for(int i = 0; i < n; i++) {
        s += floor(a[i] / x);
    }

    return s >= k;
}


int main() {
    cin >> n >> k;
    a.resize(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    double l = 0, r = 1e8;

    for(int i = 0; i < 100; i++) {
        double m = (l + r) / 2;

        if(valid(m)) {
            l = m;
        } else {
            r = m;
        }
    }

    cout << setprecision(20);
    cout << r << "\n";

    return 0;
}