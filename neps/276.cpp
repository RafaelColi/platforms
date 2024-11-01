#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<char> oitavas;
    vector<char> quartas;
    vector<char> semi;
    vector<char> final;
    int m, n;

    for(int i = 0; i < 16; i++) {
        oitavas.push_back('A' + i);
    }

    for(int i = 0, a = 0, b = 1; i < 8; i++, a += 2, b += 2)  {
        cin >> m >> n;
        if(m > n) {
            quartas.push_back(oitavas[a]);
        } else {
            quartas.push_back(oitavas[b]);
        }
    }

    for(int i = 0, a = 0, b = 1; i < 4; i++, a += 2, b += 2)  {
        cin >> m >> n;
        if(m > n) {
            semi.push_back(quartas[a]);
        } else {
            semi.push_back(quartas[b]);
        }
    }

    for(int i = 0, a = 0, b = 1; i < 2; i++, a += 2, b += 2)  {
        cin >> m >> n;
        if(m > n) {
            final.push_back(semi[a]);
        } else {
            final.push_back(semi[b]);
        }
    }

    cin >> m >> n;

    if(m > n) {
        cout << final[0] << endl;
    } else {
        cout << final[1] << endl;
    }

    return 0;
}