#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> bc(32);

		for (int i=0; i<n; i++) {
			ll x; cin >> x;

			ll leadTh = 31 - __builtin_clz(x);	//leading bit (1) gulo count kora
										//pair possible if left most bit match
			bc[leadTh]++;
		}
		ll pair_cnt = 0;
		for (int i=0; i<32; i++) {
			pair_cnt += (1LL * bc[i] * ((bc[i]-1)) / 2);
		}
		cout << pair_cnt << '\n';
	}

	return 0;
}






/* AC
#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
	
	int t; cin >> t; 
	while (t--) {
		int n; cin >> n;
		map<ll, ll> m;
		while (n--) {
			ll x; cin >> x;
			x = 31 - __builtin_clz(x);	//leading bit (1) count kora
			m[x]++;
		}
		ll count = 0;
		for (auto [i,j]:m) {
			count += (1LL * j * (j-1)) / 2;
		}
		cout << count << '\n';
	}

	return 0;
}*/