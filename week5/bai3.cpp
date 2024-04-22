#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> *v = new vector<int>();

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v->push_back(x);
    }

    int x, a, b;
    cin >> x >> a >> b;

    v->erase(v->begin() + x - 1);
    v->erase(v->begin() + a - 1, v->begin() + b - 1);

    cout << v->size() << endl;

    for(auto i : *v){
        cout << i << ' ';
    }

    cout << endl;

    return 0;
}