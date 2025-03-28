#include <bits/stdc++.h>

using namespace std;

int n, q;
vector<int> arr;

int bb(int x) {
    int l = -1, r = n, mid, ans = -1;

    while(r > l + 1) {
        mid = (l + r) / 2;

        if(arr[mid] == x) {
            r = mid;
            ans = mid;
        } else if(arr[mid] > x) {
            r = mid;
        } else {
            l = mid;
        }
    }

    return ans;
}

int main() {
    scanf("%d %d", &n, &q);
    arr.resize(n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < q; i++) {
        int qi;
        scanf("%d", &qi);

        printf("%d\n", bb(qi));
    }

    return 0;
}