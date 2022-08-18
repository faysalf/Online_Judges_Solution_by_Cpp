#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin>>t;
	map<string, int> mp;
	while (t--) {
		int n; cin >> n;
		if (n==1) {
			string na;
			int nu;
			cin >> na >> nu;

			if (mp[na]) mp[na] += nu;
			else mp[na] = nu;
		}
		else if (n==2) {
			string na; cin >> na;
			mp.erase(na);
		}
		else if (n==3) {
			string na; cin >> na;
			cout << mp[na] << '\n';
		}
	}

	return 0;
}