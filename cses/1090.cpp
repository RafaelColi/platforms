#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, x, ferris = 0;

    cin >> n >> x;

    int children[n];

    for(int i = 0; i < n; i++) {
        cin >> children[i];
    }

    sort(children, children + n);

    int i = 0, j = n - 1;

    while(i < j) {
        if(children[i] + children[j] > x) {
            ferris++;
            j--;
        } else {
            ferris++;
            i++;
            j--;
        }
    }

    if(i == j) {
        ferris++;
    }

    cout << ferris << "\n";

    return 0;
}