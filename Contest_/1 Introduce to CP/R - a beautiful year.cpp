#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int y, a,b,c,d; cin >> y;

	bool tf = true;
	while (tf) {
		y++;
		a = y/1000;
		b = (y/100) % 10;
		c = (y/10) % 10;
		d = y%10;
		if (a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) {
			tf = false;
		}
	}
	cout << a << b << c << d << '\n';

	return 0;
}