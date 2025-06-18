#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;

    while(cin >> n, n) {

        vector<int> net(n + 1);
        stack<int> path;
        map<int, int> sd;
        set<int> endpoints;
        bool possible = true;

        for(int i = 1; i <= n; i++) {
            int aux;
            cin >> aux;

            if(!endpoints.insert(aux).second) {
                possible = false;
            }

            net[i] = i;
            sd[i] = aux;
        }

        if(!possible) {
            cout << "No solution\n";
        } else {
            for(int i = 1; i <= n; i++) {
                if(net[i] != sd[i]) {

                    for (int j = i + 1; j <= n; j++) {
                        if (net[j] == sd[i]) {

                            while (net[i] != sd[i]) {
                                path.push(j - 1);
                                int aux = net[j - 1];
                                net[j - 1] = net[j];
                                net[j] = aux;
                                j--;
                            }

                            break;
                        }
                    }
                }
            }

            cout << path.size();
            if (path.size()) {
                cout << ' ';
            }

            while (!path.empty()) {
                int a = path.top();
                cout << a;
                path.pop();

                if (path.size()) {
                    cout << ' ';
                }
            }

            cout << '\n';
        }
    }
    
    return 0;
}