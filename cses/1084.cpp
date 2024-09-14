#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, k, count = 0;

    cin >> n >> m >> k;

    int app[n], apt[m];

    for(int i = 0; i < n; i++) {
        cin >> app[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> apt[i];
    }

    sort(app, app + n);
    sort(apt, apt + m);
    
    int i = 0, j = 0;

    while(i < n && j < m) {
        if(apt[j] >= app[i] - k && apt[j] <= app[i] + k) {
            count++;
            i++;
            j++;
        }

        else if(apt[j] < app[i] - k) {
            j++;
        }

        else {
            i++;
        }
    }

    cout << count << "\n";

    return 0;
}