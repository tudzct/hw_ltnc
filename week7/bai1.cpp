#include <bits/stdc++.h>

using namespace std;

int BinarySearch(int a[], int n, int l, int r, int x){
    if (l > r) return -1;
    int m = (l + r) / 2;
    if (a[m] > x) return BinarySearch(a, n, l, m - 1, x);
    else if (a[m] < x) return BinarySearch(a, n, m + 1, r, x);
    return m;
}


int main(){
    int n, x;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cout << BinarySearch(a, n, 0, n - 1, x);

    return 0;
}