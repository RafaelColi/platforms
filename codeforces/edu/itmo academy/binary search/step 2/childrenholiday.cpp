#include <bits/stdc++.h>

using namespace std;

int M, N;
vector<int> n, t, z, y;

bool valid(int x) {
    int b = 0;
    int time = 0;
    vector<int> rest(N, 0);
    vector<int> worked(N, x);

    for(int i = 0; i < N; i++) {
        n[i] = 0;
    }

    while(time < x) {
        for(int i = 0; i < N; i++) {
            worked[i];
        }
    }


    for(int i = 0; i < N; i++) {
        int aux = x;
        int rest = 0;

        while(aux - t[i] >= 0) {
            if(aux - t[i] >= 0) {
                aux -= t[i];
                rest++;
                n[i]++;
                b++;
            }

            if(rest == z[i]) {
                aux -= y[i];
                rest = 0;
            }
        }
    }

    return b >= M;
}

int main() {
    cin >> M >> N;
    n.resize(N);
    t.resize(N);
    z.resize(N);
    y.resize(N);

    for(int i = 0; i < N; i++) {
        cin >> t[i] >> z[i] >> y[i];
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

    valid(r);

    cout << r << "\n";

    for(int i = 0; i < N; i++) {
        cout << n[i];

        if(i < N - 1) {
            cout << " ";
        }
    }

    cout << "\n";
    
    return 0;
}