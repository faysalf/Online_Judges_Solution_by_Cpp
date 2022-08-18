#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	map<string, string> mp;

	string s;
	while (getline(cin, s)) {
		if (s == "") break;
		string a,b;
		stringstream ss(s);
		ss >> a >> b;
		mp[b] = a;
	}
	string fs;
	while (cin >> fs) {
		if (mp.find(fs) != mp.end()) {
			cout << mp[fs] << '\n';
		}
		else cout << "eh\n";
	}

	return 0;
}