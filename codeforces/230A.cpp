#include <bits/stdc++.h>

using namespace std;

bool desc(pair<int, int> a, pair<int, int> b) {
    if(a.first == b.first) {
        return a.second > b.second;
    }
    return a.first > b.first;
}
int main() {
    int s, n;

    cin >> s >> n;

    vector<pair<int, int>> dragons(n);

    for(int i = 0; i < n; i++) {
        int x, y;

        cin >> x >> y;

        dragons[i] = make_pair(x, y);
    }

    sort(dragons.begin(), dragons.end());

    int i = 0, j = n - 1;

    while(i >= j) {
        if(s > dragons[i].first) {
            s += dragons[i].second;
            i++;
        } else if(s > dragons[j].first) {
            s += dragons[j].second;
            j--;
        } else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";

    return 0;
}