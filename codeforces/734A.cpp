#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int a = 0, d = 0;
    int n;

    cin >> n >> s;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 'A') a++;
        if(s[i] == 'D') d++;
    }

    if(a > d) {
        cout << "Anton\n";
    } else if(a < d) {
        cout << "Danik\n";
    } else {
        cout << "Friendship\n";
    }

    return 0;
}