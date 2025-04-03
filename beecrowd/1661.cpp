#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    while(cin >> n, n) {
        vector<long long> wine(n);

        for(int i = 0; i < n; i++) {
            cin >> wine[i];
        }

        long long work = 0;
        long long load = wine[0];

        for(int i = 1; i < n; i++) {
            work += abs(load);
            load += wine[i];
        }

        cout << work + abs(load) << '\n';
    }

    return 0;
}