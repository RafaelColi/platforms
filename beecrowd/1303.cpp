#include <bits/stdc++.h>

using namespace std;

bool solveTie(vector<int> a, vector<int> b) {
    if(a[4] == b[4]) {
        
        if(a[3] == b[3]) {

            if(a[1] == b[1]) {
                return a[0] < b[0];
            }

            return a[1] > b[1];
        }

        return a[3] > b[3];
    }

    return a[4] > b[4];
}

int main() {
    int n;
    int instance = 1;

    scanf("%d", &n);

    while(n) {
        vector<vector<int>> data (n, vector<int> (5, 0));

        for(int i = 0; i < n; i++) {
            data[i][0] = i + 1;

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

        for(int i = 0; i < n * (n - 1) / 2; i++) {
            int x, y, z, w;
            scanf("%d %d %d %d", &x, &y, &z, &w);

            data[x - 1][1] += y;
            data[x - 1][2] += w;

            data[z - 1][1] += w;
            data[z - 1][2] += y;


            if(data[x - 1][2]){
                data[x - 1][3] = data[x - 1][1] / data[x - 1][2];
            } else {
                data[x - 1][3] += data[x - 1][1];
            }

            if(data[z - 1][2]) {
                data[z - 1][3] = data[z - 1][1] / data[x - 1][2];
            } else {
                data[z - 1][3] += data[z - 1][1];
            }

            if(y > w) {
                data[x - 1][4] += 2;
                data[z - 1][4] += 1;
            } else {
                data[x - 1][4] += 1;
                data[z - 1][4] += 2;
            }
        }

        sort(data.begin(), data.end(), solveTie);

        printf("Instancia %d\n", instance);

        for(int i = 0; i < n; i++) {
            printf("%d", data[i][0]);

            if(i < n - 1) {
                printf(" ");
            }
        }

        printf("\n\n");

        instance++;
        scanf("%d", &n);
    }

    return 0;
}