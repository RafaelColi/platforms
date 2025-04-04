#include <bits/stdc++.h>

using namespace std;

int n, m;
vector<vector<int>> graph;
vector<bool> visited;

int bl() {
    int count = 0;
    queue<int> q;

    for(int i = 1; i < graph.size(); i++) {
        if(!visited[i]) {
            count++;
            visited[i] = true;
            q.push(i);

            while(!q.empty()) {
                int u = q.front();
                q.pop();

                for(int v : graph[u]) {
                    if(!visited[v]) {
                        visited[v] = true;
                        q.push(v);
                    }
                }

                visited[u] = true;
            }
        }
    }

    return count;
}

int main() {
    cin >> n >> m;
    graph.resize(n + 1, vector<int> (n + 1));
    visited.resize(n + 1, false);

    for(int k = 1; k <= m; k++) {
        int i, j;
        cin >> i >> j;

        graph[i].push_back(j);
        graph[j].push_back(i);
    }

    cout << bl() << '\n';

    return 0;
}


/*

vector<int> pai;

int find(int x) {
    if(pai[x] == x) 
        return x;

    return pai[x] = find(pai[x]);
}

void join(int x, int y) {
    
    pai[find(x)] = find(y);
}

int main() {
    int n, m;
    cin >> n >> m;
    pai.resize(n);

    for(int i = 0; i < n; i++) {
        pai[i] = i;
    }

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

    cout << qtd << endl;

    return 0;
}

*/