#include <bits/stdc++.h>

using namespace std;

int main() {
    string in;
    cin >> in;
    vector<char> n;

    for(int i = 0; i < in.size(); i+=2) {
        n.push_back(in[i]);
    }

    sort(n.begin(), n.end());

    for(int i = 0; i < n.size(); i++) {
        cout << n[i];
        
        if(i < n.size() - 1) {
            cout << "+";
        }
    }

    cout << "\n";
    
    return 0;
}