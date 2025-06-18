#include <bits/stdc++.h>

using namespace std;

typedef struct {
    int id;
    int pontos;
    int c_rec;
    int c_marc;
    double c_avg;
} time_data;

bool solveTie(time_data a, time_data b) {
    if(a.pontos == b.pontos) {
        
        if(a.c_avg == b.c_avg) {

            if(a.c_marc == b.c_marc) {
                return a.id < b.id;
            }

            return a.c_marc > b.c_marc;
        }

        return a.c_avg > b.c_avg;
    }

    return a.pontos > b.pontos;
    /*
            Data {
                0: Id
                1: Cesta marcada
                2: Cesta recebida
                3: Cesta average
                4: Pontos
            }
            */
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int instance = 1;

    cin >> n;

    while(n) {
        vector<time_data> data(n);

        for(int i = 0; i < n; i++) {
            data[i].id = i + 1;
            data[i].c_avg = 0;
            data[i].c_marc = 0;
            data[i].c_rec = 0;
            data[i].pontos = 0;
        }

        for(int i = 0; i < n * (n - 1) / 2; i++) {
            int x, y, z, w;
            cin >> x >> y >> z >> w;

            data[x - 1].c_marc += y;
            data[x - 1].c_rec += w;

            data[z - 1].c_marc += w;
            data[z - 1].c_rec += y;
            
            data[x - 1].pontos++;
            data[z - 1].pontos++;

            if(y > w) {
                data[x - 1].pontos++;
            }

            if(w > y) {
                data[z - 1].pontos++;
            }

            if(data[x - 1].c_rec){
                data[x - 1].c_avg = (double) data[x - 1].c_marc / data[x - 1].c_rec;
            } else {
                data[x - 1].c_avg += data[x - 1].c_marc;
            }

            if(data[z - 1].c_rec) {
                data[z - 1].c_avg = (double) data[z - 1].c_marc / data[z - 1].c_rec;
            } else {
                data[z - 1].c_avg += data[z - 1].c_marc;
            }
        }

        sort(data.begin(), data.end(), solveTie);

        cout << "Instancia " << instance++ << '\n';

        for(int i = 0; i < n; i++) {
            cout << data[i].id;

            if(i < n - 1) {
                cout << ' ';
            }
        }

        cout << '\n';
        cin >> n;

        if(n) {
            cout << '\n';
        }
    }

    return 0;
}