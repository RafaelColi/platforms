#include <bits/stdc++.h>

using namespace std;

typedef struct {
    int id;
    int voos;
} node;

bool comp(const node &a, const node &b) {
    if(a.voos == b.voos) {
        return a.id < b.id;
    }

    return a.voos > b.voos;
}

int main() {
    int a, v;
    int teste = 1;
    cin >> a >> v;

    while(a && v) {
        vector<node> air(a);

        for(int i = 0; i < a; i++) {
            air[i] = {i + 1, 0};
        }

        for(int i = 0; i < v; i++) {
            int x, y;
            cin >> x >> y;

            air[x - 1].voos++;
            air[y - 1].voos++;
        }

        sort(air.begin(), air.end(), comp);
        int busy = air[0].voos;
        int i = 0;
        
        cout << "Teste " << teste++ << '\n';
        while(i < a) {
            cout << air[i++].id;

            if(air[i].voos < busy) {
                break;
            } else {
                cout << ' ';
            }
        }

        cout << "\n";

        cin >> a >> v;

        if(a && v) {
            cout << '\n';
        }
    }
    
    cout << '\n';
    
    return 0;
}