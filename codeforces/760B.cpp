#include <bits/stdc++.h>

using namespace std;

long long n, m, k;

bool valid(long long x) {
    long long pillows = m - x;
    long long amount = x;
    long long sum = 0;

    if(pillows < n) {
        return false;
    }

    if(amount > 1) {
        amount--;
    }

    if(n - k < amount) {
        if(n - k) {
            sum += (amount + amount - (n - k - 1)) * (n - k) / 2;
        }
    } else {
        sum += (amount + 1) * (amount) / 2;
        sum += n - k - amount;
    }

    if(k - 1 < amount) {
        if(k - 1) {
            sum += (amount + amount - (k - 1 - 1)) * (k - 1) / 2;
        }
    } else {
        sum += (amount + 1) * (amount) / 2;
        sum += k - 1 - amount;
    }

    return sum <= pillows;
}

long long bs() {
    long long l = 1, r = m + 1, mid;

    while(r > l + 1) {
        mid = (l + r) / 2;

        if(valid(mid)) {
            l = mid;
        } else {
            r = mid;
        }
    }

    return l;
}
int main() {
    cin >> n >> m >> k;

    if(n == 1) {
        cout << m << '\n';
    } else {
        cout << bs() << '\n';
    }

    return 0;
}