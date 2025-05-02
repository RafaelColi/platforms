#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<int> a;

int main() {
    cin >> n >> m;
    a.resize(n + 1);

    int work = 0;

    for(int i = 1; i <= n; i++) {
        cin >> a[i];
        work += i + a[i];
    }

    cout << (work / m) + (work % m) << '\n';

    return 0;
}