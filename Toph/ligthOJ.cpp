#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;

	for (int i=1; i<=t; i++) {
		cout << "Case "<<i<<":\n";

		int n, q; cin >> n >> q;
		vector<int> v(n);
		for (int i=1; i<=n; i++) {
			int f; cin >> f;
			v[f] = i;
		}
		for (int i=0; i<q; i++) {
			int f, s; cin >> f >> s;
			cout << v[s] - v[f-1] << '\n';
		}
	}

	return 0;
}
