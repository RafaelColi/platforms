#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    string names[n];

    for(int i = 0; i < n; i++) {
        cin >> names[i];
    }

    sort(names, names + n);

    cout << names[k - 1] << "\n";

    return 0;
}