#include <bits/stdc++.h>
using namespace std;


int mysteryNum(vector<int>& a, vector<int>& b){
    unordered_map<int, int> count;

    for(int it : a) count[it]++;

    for(int it : b) count[it]--;

    for(auto& p : count){
        if(p.second < 0) return p.first;
    }

    return 0;
}

int main() {
    int n; cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<int> b(n + 1);
    for(int i = 0; i < n + 1; i++) cin >> b[i];

    int ans = mysteryNum(a, b);
    cout << ans << endl;

    return 0;
}
