#include <bits/stdc++.h>

using namespace std;

typedef struct {
    int has;
    int needs;
    int makes;
} ingredient;

int n, k;
vector<ingredient> ing;

bool sort_cookies(ingredient a, ingredient b) {
    return a.makes < b.makes;
}

bool valid(int x, int mp) {
    for(int i = 0; i < n; i++) {
        int diff = x - ing[i].makes;
        mp += ing[i].has;

        if(mp < ing[i].needs * diff) {
            return false;
        }

        mp -= ing[i].needs * diff;
    }

    return true;
}

int bs() {
    int l = -1, r = 1, m;
    
    while(valid(r, k)) {
        r *= 2;
    }

    while(r > l + 1) {
        m = (l + r) / 2;

        if(valid(m, k)) {
            l = m;
        } else {
            r = m;
        }
    }

    return l;
}

int main() {
    cin >> n >> k;
    ing.resize(n);

    for(int i = 0; i < n; i++) {
        cin >> ing[i].needs;
    }

    for(int i = 0; i < n; i++) {
        cin >> ing[i].has;
        ing[i].makes = ing[i].has / ing[i].needs;
        ing[i].has = ing[i].has % ing[i].needs;
    }

    sort(ing.begin(), ing.end(), sort_cookies);

    cout << bs() << '\n';

    return 0;
}