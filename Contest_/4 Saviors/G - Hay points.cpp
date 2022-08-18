#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int x, y;
	cin >> x >> y;

	map<string, int> mp;
	while (x--) {
		string str; int numb; cin >> str >> numb;
		mp[str] = numb;
	}
	while (y--) {
		string str2, wrd; long long cnt = 0;
		getline(cin, str2, '.');
		stringstream fs;
		fs << str2;

		while (fs >> wrd) {
			cnt += mp[wrd];
		}
		cout << cnt << '\n';
	}

	return 0;
}