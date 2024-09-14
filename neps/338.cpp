#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    vector<pair<int, int>> cars(n);
    
    for(int i = 0; i < n; i++) {
        int time = 0;

        for(int j = 0; j < m; j++) {
            int temp;

            cin >> temp;

            time += temp;    
        }

        cars[i] = make_pair(time, i + 1);
    }

    sort(cars.begin(), cars.end());

    cout << cars[0].second << "\n" << cars[1].second << "\n" << cars[2].second << "\n";

    return 0;
}