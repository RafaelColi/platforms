#include <bits/stdc++.h>

using namespace std;

int main() {
    set<char> c;
    string in;
    bool chat = true;

    cin >> in;

    for(int i = 0; i < in.size(); i++) {
        if(!c.count(in[i])) {
            chat = !chat;
            c.insert(in[i]);
        }
    }

    if(chat) {
        cout << "CHAT WITH HER!\n";
    } else {
        cout << "IGNORE HIM!\n";
    }

    return 0;
}