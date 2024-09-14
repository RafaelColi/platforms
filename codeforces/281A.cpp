#include <bits/stdc++.h>

using namespace std;

int main() {
    string in;
    cin >> in;

    in[0] = toupper(in[0]);

    for(int i = 0; i < in.size(); i++) {
        cout << in[i];
    }

    cout << "\n";

    return 0;
}