#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    queue<int> calls;
    map<int, int> active;
    set<int> inactive;
    map<int, int> callers;

    for(int i = 0; i < n; i++) {
        inactive.insert(i + 1);
        callers[i + 1] = 0;
    }

    while(l--) {
        int t;
        cin >> t;

        calls.push(t);
    }


    while(!calls.empty()) {
        int quickestCall = INT32_MAX;
        set<int>::iterator hpc = inactive.begin();
        
        while(!inactive.empty() && !calls.empty()) {
            active[*hpc] = calls.front();
            
            callers[*hpc]++;

            inactive.erase(hpc);
            hpc = inactive.begin();

            if(calls.front() < quickestCall) {
                quickestCall = calls.front();
            }

            calls.pop();
        }

        vector<map<int,int>::iterator> done;

        for(map<int, int>::iterator it = active.begin(); it != active.end(); it++) {
            (*it).second -= quickestCall;

            if((*it).second == 0) {
                inactive.insert((*it).first);
                done.push_back(it);
            }
        }

        for(int i = 0; i < done.size(); i++) {
            map<int, int>::iterator it = done[i];
            active.erase((*it).first);
        }
    }

    for(auto it : callers) {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}