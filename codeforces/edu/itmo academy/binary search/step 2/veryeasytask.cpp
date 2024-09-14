#include <bits/stdc++.h>

using namespace std;

int n, x, y;

bool valid(int t) {
    return floor(t / x) + floor((t - x) / y) >= n;
}

int main() {
    cin >> n >> x >> y;

    if(x > y) {
        swap(x, y);
    }

    int l = 0, r = 1;
    
    while(!valid(r)) {
        r *= 2;
    }

    while(r > l + 1) {
        int m = (l + r) / 2;

        if(valid(m)) {
            r = m;
        } else {
            l = m;
        }
    } 

    cout << r << "\n";

    return 0;
}