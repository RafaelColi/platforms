#include <bits/stdc++.h>

using namespace std;

int main() {
    int t, n;

    cin >> t;

    for(int i = 0; i < t; i++) {
        cin >> n;

        vector<int> athletes(n);

        for(int j = 0; j < n; j++) {
            int in;

            cin >> in;

            athletes[j] = in;
        }

        sort(athletes.begin(), athletes.end());

        int min = athletes[n - 1] - athletes[0];
        
        for(int j = 0; j < n - 1; j++) {
            if(athletes[j + 1] - athletes[j] < min) {
                min = athletes[j + 1] - athletes[j];
            }
        }

        cout << min << "\n";
    }

    return 0;
}