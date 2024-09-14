#include <bits/stdc++.h>

using namespace std;

int main() {
    int year;

    cin >> year;

    bool valid = true;
    set<int> n;
    int mod = 1000;

    year++;

    while(valid) {
        if(n.count(year / mod)) {
            mod = 1000;
            year++;
        }
    }
}