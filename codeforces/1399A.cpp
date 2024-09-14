#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--) {
        int n;
        bool ans = true;

        cin >> n;

        int arr[n];

        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        for(int i = 0; i < n - 1; i++) {
            if(abs(arr[i] - arr[i + 1]) > 1) {
                ans = false;
            }
        }

        if(ans) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}