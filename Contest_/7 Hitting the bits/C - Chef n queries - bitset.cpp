#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int q; ll s1, a, bb, sum = 0;
	cin >> q >> s1 >> a >> bb;

	vector<bool> b(1LL << 31);

	for (int i=0; i<q; i++) {
		ll half = s1 / 2;			//half add/delete
		if ((s1&1) && !(b[half])) {	//s1 odd hole 1st operation-add
			sum += half;
			b[half] = 1;
		}
		else if (!(s1&1) && b[half]) {	//otherwise 2nd op - remove
			sum -= half;
			b[half] = 0;
		}
		s1 = (s1*a + bb) % (1LL<<32);	//given formula - add/del half of s1 every operation
	}
	cout << sum << '\n';

	return 0;
}