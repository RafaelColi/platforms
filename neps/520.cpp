#include <bits/stdc++.h>

using namespace std;

int n, d;
vector<vector<int>> trees;
vector<bool> visited;

void bl() {
    int count = 0;
    queue<int> q;
    q.push(0);
    visited[0] = true;

    while(!q.empty()) {
        int u = q.front();
        q.pop();

        for(int v : trees[u]) {
            if(!visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }

        count++;
    }

    if(count < n) 
        printf("N\n");
    else 
        printf("S\n");
    
    return;
}

int main() {
    cin >> n >> d;

    vector<pair<int, int>> coord(n);
    trees.resize(n);
    visited.resize(n, false);

    for(int i = 0; i < n; i++) {
        int x, y;
       cin >> x >> y;

        coord[i] = {x, y};
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(i == j)
                continue;

            pair<int, int> u, v;
            u = {coord[i].first, coord[i].second};
            v = {coord[j].first, coord[j].second};

            if(sqrt(pow(v.first - u.first, 2) + pow(v.second - u.second, 2)) <= d) {
                trees[i].push_back(j);
                trees[j].push_back(i);
            }
        }
    }

    bl();

    return 0;
}