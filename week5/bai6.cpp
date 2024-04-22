#include <bits/stdc++.h>

using namespace std;

int main(){
	int q; cin >> q;
	map<string, int> mp;

	while(q--){
		int n, y;
		string x;
		cin >> n;

		if(n == 1){
			cin >> x >> y;
			mp[x] += y;
		}

		else if(n == 2){
			cin >> x;
			mp[x] = 0;
		}

		else if(n == 3){
			cin >> x;
			cout << mp[x] << endl;
		}
	}
}