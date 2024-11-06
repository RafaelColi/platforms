#include <bits/stdc++.h>

using namespace std;

vector<int> pai;


int find(int x) {
    if(pai[x] == x) {
        return x;
    }

    return pai[x] = find(pai[x]);
}

void join(int x, int y) {
    pai[find(x)] = find(y);
}

int main() {
    int n, m;
    int tt = 1;
    cin >> n >> m;

    while(n && m) {
        pai.resize(n);

        for(int i = 0; i < n; i++)
            pai[i] = i;

        while(m--) {
            int i, j;
            cin >> i >> j;

            join(i - 1, j - 1);
        }

        int qtd = 0;
        for(int i = 0; i < n; i++) {
            if(pai[i] == i)
                qtd++;
        }

        cout << "Case " << tt << ": " << qtd << endl;
        tt++;

        cin >> n >> m;
    }  

    return 0;
}