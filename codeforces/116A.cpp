#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, max = 0, aboard = 0;
    cin >> n;

    while(n--) {
        int in, out;

        cin >> out >> in;

        aboard -= out;
        aboard += in;

        if(aboard > max) {
            max = aboard;
        }
    }

    cout << max << "\n";

    return 0;
}