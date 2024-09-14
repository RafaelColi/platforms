#include <bits/stdc++.h>

using namespace std;

int M;

bool prop(int a, int b) {
    if(a % M == b % M) {
        return a / M > b / M;
    }

    return a % M > b % M;
}

int main() {
    int n;

    cin >> n >> M;

    int cards[n];

    for(int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    sort(cards, cards + n, prop);

    for(int i = 0; i < n; i++) {
        cout << cards[i];

        if(i < n - 1) {
            cout << " ";
        }
    }

    cout << "\n";

    return 0;
}