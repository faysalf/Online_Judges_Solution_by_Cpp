#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, q, f;
	cin >> n >> m >> q;
	

	bitset<4001> a[100001], b[100001], res;
	for (int i=0; i<n; i++) {
		cin >> f;
		a[i][f] = 1;			//Fth bit's on
		if (i) a[i] ^= a[i-1];	//remove common bits
	}
	for (int j=0; j<m; j++) {
		cin >> f;
		b[j][f] = 1;
		if (j) b[j] ^= b[j-1];
	}
	while (q--) {
		int l, r, ll, rr;
		cin >> l >> r >> ll >> rr;
		res = a[r-1] ^ b[rr-1];		//remove common bits from both right side
		if (l-1) res ^= a[l-2];		//minus Alth common bits
		if (ll-1) res ^= b[ll-2];	//minus Bllth common bits 

		cout << res.count() << '\n';//count(1)
	}

	return 0;
}