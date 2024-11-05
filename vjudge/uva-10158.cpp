#include <bits/stdc++.h>

using namespace std;

vector<int> friends;
vector<int> enemies;

int findEnemies(int x) {
    if(enemies[x] == x) {
        return x;
    }

    return enemies[x] = findEnemies(enemies[x]);
}

void joinEnemies(int x, int y) {
    if(findFriends(x) == findFriends(y)) {
        cout << "-1\n";
        return;
    }

    enemies[findEnemies(x)] = findEnemies(y);
}

int findFriends(int x) {
    if(friends[x] == x) {
        return x;
    }

    return friends[x] = findFriends(friends[x]);
}

void joinFriends(int x, int y) {
    if(findEnemies(x) == findEnemies(y)) {
        cout << "-1\n";
        return;
    }
        
    friends[findFriends(x)] = findFriends(y);
}


int main() {
    int n, c, x, y;
    cin >> n;
    friends.resize(n + 1);
    enemies.resize(n + 1);
    
    do {

    } while(c && x && y);

    return 0;
}