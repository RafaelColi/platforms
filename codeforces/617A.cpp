#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, steps = 0;

    cin >> x;

    for(int i = 5; i > 0; i--) {
        steps += x / i;
        x %= i;
    }

    cout << steps << "\n";

    return 0;
}