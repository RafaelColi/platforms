#include <bits/stdc++.h>

using namespace std;

int main() {
    map<int, int> values;
    vector<int> order;

    int n;
    while(scanf("%d", &n) != EOF) {
        if(values.find(n) != values.end()) {
            values[n]++;
        } else {
            values[n] = 1;
            order.push_back(n);
        }
    }
    
    for(int i = 0; i < order.size(); i++) {
        printf("%d %d\n", order[i], values[order[i]]);
    }

    return 0;
}