#include <bits/stdc++.h>

using namespace std;

int n, c;
vector<int> stalls;

bool valid(int x) {
    int s = 1;
    int last = 0;
    int assigned = 1;

    for(int i = 1; i < c; i++) {
        while(s < n) {
            if(stalls[s] - stalls[last] >= x) {
                last = s;
                s++;
                assigned++;
                break;
            }
            
            s++;
        }
    }

    return assigned == c;
}

int bs() {
    int l = -1, r = 1e9 + 1, mid;

    while(r > l + 1) {
        mid = (l + r) / 2;

        if(valid(mid)) {
            l = mid;
        } else {
            r = mid;
        }
    }

    return l;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        cin >> n >> c;
        stalls.resize(n);
        
        for(int i = 0; i < n; i++) {
            cin >> stalls[i];
        }

        sort(stalls.begin(), stalls.end());

        cout << bs() << '\n';
    }

    return 0;
}