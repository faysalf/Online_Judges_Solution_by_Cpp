#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool ok(int n, int x, int y, int m) {
	int mn = min(x,y);
	if (m < mn) return false;

	m -= mn;
	int res = 1;
	res += m/x;
	res += m/y;

	return res >= n;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, x, y, mid; cin >> n >> x >> y;
	int l = 0, r = 2e9 + 5;
	while (l+1 < r) {
		mid = (l+r)/2;
		if (ok(n,x,y,mid)) {
			r = mid;
		}
		else l = mid;
	}
	cout << r << '\n';


	return 0;
}



















/*#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, x, y; cin >> n >> x >> y;
	int mn, mx, count = 0, cnt = 0;

	if (x > y) { mn = y; mx = x;}
	else { mn = x; mx = y;}
	count = mn;
	while (count < n) {
		if ((n-count) < mx) {
			cnt += ceil((double) (n-count)/mn);
			count = n;
			cerr << ceil((double) (n-count)/mn) << ' '<<((double) (n-count)/mn) << '\n';
		}	
		else {
			count += (mx * mn) + 1;
			cnt += mx;
			cerr<< mx << '\n';
		}
	}
	long long f = (long long) x * n, s = (long long) y*n;
	int minn = min(f, s);
	if (minn < cnt+mn) cout << minn << '\n';
	else cout << cnt+mn << '\n';

	//cout << min({f, s, cnt+mn}) << '\n';
	return 0;
}*/