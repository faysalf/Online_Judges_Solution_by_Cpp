#include <bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int k, s, l; cin >> k >> s;

	int sm = 0;
	for (int i = 0; i <= k; i++) {
		for (int j = 0; j <= k; j++) {
			l = s - i - j;
			if (l >= 0 && l <= k) {
				sm ++;
			}
		}
	}
	cout << sm << '\n';

	return 0;
}