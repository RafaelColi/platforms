#include <bits/stdc++.h>

using namespace std;

int main() {
    pair<pair<int, int>, pair<int, int>> a;
    pair<pair<int, int>, pair<int, int>> b;

    int x0, x1, y0, y1;
    cin >> x0 >> y0 >> x1 >> y1;

    a = make_pair(make_pair(x0, x1), make_pair(y0, y1));

    cin >> x0 >> y0 >> x1 >> y1;

    b = make_pair(make_pair(x0, x1), make_pair(y0, y1));

    if(a.first.second < b.first.first || a.first.first > b.first.second || a.second.first > b.second.second || a.first.second < b.first.first) {
        cout << "0\n";
    } else {
        cout << "1\n";
    }

    return 0;
}