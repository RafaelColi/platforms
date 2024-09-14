#include <bits/stdc++.h>

#define max 3;

using namespace std;

int main() {
    int n, k;

    cin >> n >> k;

    int students[n];

    for(int i = 0; i < n; i++) {
        cin >> students[i];
    }

    sort(students, students + n);

    for(int i = n - 1; i >= 0; i--) {
        if(students[i] + k > 5) {
            n--;
        }
    }

    cout << n / 3 << "\n";

    return 0;

}