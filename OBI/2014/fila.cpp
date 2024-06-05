#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    vector<int> fila;
    set<int> apressados;

    cin >> n;

    for(int i = 0; i < n; i++) {
        int id;

        cin >> id;

        fila.push_back(id);
    }

    cin >> m;

    for(int i = 0; i < m; i++) {
        int id;

        cin >> id;

        apressados.insert(id);    
    }

    int ctrl = 0;

    for(int i = 0; i < n; i++) {
        if(apressados.find(fila[i]) == apressados.end()) {
            if(ctrl++ > 0) {
                cout << " ";
            }

            cout << fila[i];
        }
    }

    cout << endl;

    return 0;
}