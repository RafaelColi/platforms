#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_map<string, int> institutions;
    vector<string> order;

    while(n != 0) {
        for(int i = 0; i < n; i++) {
            string name, inst;
            cin >> name >> inst;

            if(institutions.find(inst) != institutions.end()) {
                institutions[inst]++;
            } else {
                institutions[inst] = 1;
                order.push_back(inst);
            }
        }

        cin >> n;
    }

    for(int i = 0; i < institutions.size(); i++) {
        cout << order[i] << " " << institutions[order[i]] << endl;
    }

    return 0;
}