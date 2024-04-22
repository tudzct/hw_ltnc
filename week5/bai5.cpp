#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int q; cin >> q;
    set<int> s;
    while(q--){
        int x, y;
        cin >> y >> x;
        
        if(y == 1) s.insert(x);

        else if(y == 2){
            auto i = s.find(x);
            if(i != s.end()) s.erase(i);
        }

        else if(y == 3){
            cout << (s.find(x) != s.end() ? "Yes" : "No");
            cout << endl;
        }
    }
}
