#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l, c;
    while(cin >> n >> l >> c) {
        string s;
        getline(cin >> ws, s);
        stringstream ss(s);

        int chars = 0, lines = 1, pages = 1;

        while(ss >> s) {
            if(chars + s.size() > c) {
                if(lines < l) {
                    lines++;
                } else {
                    lines = 1;
                    pages++;
                }

                chars = s.size() + 1;
            } else {
                chars += s.size() + 1;
            }
        }

        cout << pages << '\n';

    }

    return 0;
}