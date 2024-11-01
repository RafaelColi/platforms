#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    unordered_set<int> proibidos;

    while(n--) {
        int num;
        cin >> num;

        proibidos.insert(num);
    }

    int s;

    while(scanf("%d", &s) != EOF) {
        if(proibidos.find(s) == proibidos.end()) {
            printf("nao\n");
        } else {
            printf("sim\n");
        }
    }

    return 0;
}