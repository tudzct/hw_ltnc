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

    // for(int i = 0; i < n; i++){
    //     for(int j = i + 1; j < n; j++){
    //         if((*v)[i] > (*v)[j]){
    //             int tmp = (*v)[i];
    //             (*v)[i] = (*v)[j];
    //             (*v)[j] = tmp;
    //         }
    //     }
    // }

    sort(v->begin(), v->end());
    
    for(auto i : *v) cout << i << ' ';

    cout << endl;
    return 0;
}