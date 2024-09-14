#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;

    cin >> a >> b;

    if(a.size() != b.size()) {
        cout << "NO\n";
        return 0;
    }
    
    for(int i = 0, j = b.size() - 1; i < a.size(); i++, j--) {
        if(a[i] != b[j]) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";

    return 0;
}