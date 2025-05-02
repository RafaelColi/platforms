#include <bits/stdc++.h>

using namespace std;

int n, q;
vector<int> arr;

int bs(int x) {
    int l = -1, r = n, m;

    while(r > l + 1) {
        m = (l + r) / 2;

        if(arr[m] <= x) {
            l = m;
        } else {
            r = m;
        }
    }

    return l + 1;
}

int main() {
    cin >> n;
    arr.resize(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    
    cin >> q;

    for(int i = 0; i < q; i++) {
        int x;
        cin >> x;

        cout << bs(x) << '\n';
    }

    return 0;
}