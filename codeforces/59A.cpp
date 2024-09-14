#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int upper = 0, lower = 0;
    
    cin >> s;

    for(int i = 0; i < s.size(); i++) {
        if(isupper(s[i])) {
            upper++;
        } else {
            lower++;
        }
    }

    if(upper > lower) {
        for(int i = 0; i < s.size(); i++) {
            cout << string(1, toupper(s[i]));
        }
    } else {
        for(int i = 0; i < s.size(); i++) {
            cout << string(1, tolower(s[i]));
        }
    }

    cout << "\n";

    return 0;
}