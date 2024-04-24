#include <bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int binarySearch(int l, int r, vector<int> v, int x)
{
    int m = (l + r) / 2;

    if(l <= r)
    {
        if(v[m] == x) return m;
        else if(v[m] > x) return binarySearch(l, m - 1, v, x);
        else return binarySearch(r, m + 1, v, x);
    }

    return -1;
}

int main()
{
    int n; cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.pb(x);
    }

    int x; cin >> x;

    sort(v.begin(), v.end());

    int res = binarySearch(0, n - 1, v, x);
    if(res == -1) cout << "Not found" << endl;
    else cout << "Found at: " << res << endl;

    return 0;
}
