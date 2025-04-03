#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> sum(n + 1, 0);

    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        sum[i] = sum[i - 1] + x;
    }

    for(int i = 0; i < q; i++)
    return 0;
}