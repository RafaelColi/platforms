#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, remove = 0;
    string s;
    char last = ' ';

    cin >> n >> s;

    for(int i = 0; i < n; i++) {
        if(s[i] == last) {
            remove++;
        }

        last = s[i];
    }

    cout << remove << "\n";
    
    return 0;
}