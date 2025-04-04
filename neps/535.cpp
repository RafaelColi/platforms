#include <bits/stdc++.h>

using namespace std;

int n, m, x, y, k;
vector<vector<bool>> graph;

int bl() {
    int count = 0;
    queue<pair<int, int>> q;
    
    q.push({x, y});
    graph[x][y] = true;
    count++;

    while(!q.empty()) {
        pair<int, int> u = q.front();
        q.pop();

        for(int i = -1; i <= 1; i++) {
            for(int j = -1; j <= 1; j++) {

                if((u.first + i >= 0 and u.first + i < n) and (u.second + j >= 0 and u.second + j < m)) {
                    pair<int, int> v = {u.first + i, u.second + j};

                    if(!graph[v.first][v.second]) {
                        graph[v.first][v.second] = true;
                        q.push({v.first, v.second});
                        count++;
                    }
                }
            }
        }
    }

    return count;
}

int main() {
    cin >> n >> m >> x >> y >> k;
    x--; y--;
    graph.resize(n, vector<bool> (m, false));
    
    for(int i = 0; i < k; i++) {
        int a, b;
        cin >> a >> b;

        a--; b--;

        graph[a][b] = true;
    }
    
    cout << bl() << '\n';

    return 0;
}