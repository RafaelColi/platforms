#include <bits/stdc++.h>

using namespace std;

vector<int> pai;
vector<int> qtd;
map<string, int> friends;

int find(int x) {
    if(pai[x] == x) {
        return x;
    }

    return pai[x] = find(pai[x]);
}

void join(int x, int y) {
    x = find(x);
    y = find(y);

    if(x == y)
        cout << qtd[y] << endl;
    
    else {
        pai[x] = y;
        qtd[y] += qtd[x];
        cout << qtd[y] << endl;
    }
}

int main() {
    int tt;
    cin >> tt;

    while(tt--) {
        int n;
        cin >> n;

        pai.clear();
        qtd.clear();
        friends.clear();

        for(int i = 0; i < n; i++) {
            string s1, s2;
            cin >> s1 >> s2;

            if(friends.find(s1) == friends.end()) {
                friends[s1] = friends.size();
                pai.push_back(friends[s1]);
                qtd.push_back(1);
            }

            if(friends.find(s2) == friends.end()) {
                friends[s2] = friends.size();
                pai.push_back(friends[s2]);
                qtd.push_back(1);
            }

            join(friends[s1], friends[s2]);
        }
    }

    return 0;
}