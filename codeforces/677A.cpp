#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, h;

    cin >> n >> h;

    int width = n;

    while(n--) {
        int a;

        cin >> a;

        if(a > h) {
            width++;
        }
    }

    cout << width << "\n";
    
    return 0;
}