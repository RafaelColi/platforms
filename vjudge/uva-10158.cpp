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

int findFriends(int x) {
    if(friends[x] == x) {
        return x;
    }

    return friends[x] = findFriends(friends[x]);
}

void joinEnemies(int x, int y) {
    if(findFriends(x) == findFriends(y)) {
        cout << "-1\n";
        return;
    }

    enemies[findEnemies(x)] = findEnemies(y);
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
    friends.resize(n);
    enemies.resize(n);
    
    for(int i = 0; i < n; i++) {
        friends[i] = i;
        enemies[i] = -1;
    }

    cin >> c >> x >> y;

    while(c || x || y) {
        switch(c) {
            case 1:
                joinFriends(x, y);
                break;

            case 2:
                joinEnemies(x, y);
                break;

            case 3:
                findFriends(x) == findFriends(y) ? cout << "1\n" : cout << "0\n";
                break;

            case 4:
                findEnemies(x) == findEnemies(y) ? cout << "1\n" : cout << "0\n";
                break;
            
            default:
                break;
        }

        cin >> c >> x >> y;
    }

    return 0;
}