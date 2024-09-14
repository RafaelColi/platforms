#include <bits/stdc++.h>

using namespace std;

bool custom(pair<int, int> a, pair<int, int> b) {
    return a.first < b.first;
}

int main() {
    int n, a, b;

    cin >> n;

    vector<pair<int, int>> laptops(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a >> b;

        laptops[i] = (make_pair(a, b));
    }

    sort(laptops.begin(), laptops.end(), custom);

    int max = laptops[0].second;

    for(int i = 1; i < n; i++) {
        if(laptops[i].second < max) {
            cout << "Happy Alex\n";
            return 0;
        } else {
            max = laptops[i].second;
        }
    }

    cout << "Poor Alex\n";

    return 0;
}