#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int n = 0;

    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if(s[i] == '4' || s[i] == '7') {
            n++;
        }
    }

    s = to_string(n);
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] != '4' && s[i] != '7') {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";

    return 0;
}