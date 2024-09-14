#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n, w;
    
    cin >> k >> n >> w;

    int sum = (w / 2.0) * (k + w * k) - n;
    
    if(sum < 0) {
        cout << "0\n";
    } else {
        cout << sum << "\n";
    }

    return 0;
}