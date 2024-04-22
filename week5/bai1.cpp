#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void update(int *a, int *b){
    int x = *a, y = *b;
    *a = x + y;
    *b = (x - y > 0 ? x - y : y - x);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a, b;
    cin >> a >> b;
    update(&a, &b);
    cout << a << endl << b << endl;
    return 0;
}
