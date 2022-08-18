#include <bits/stdc++.h>
using namespace std;
#define int long long int

bool ok(int w, int h, int m, int n) {
	return (m/w)*(m/h) >= n;
}
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int w, h, n, l=0, r=1; cin >> w >> h >> n;
	while (!(ok(w,h,r,n))) r *= 2;	//ok hole beshio hote pare

	while (r > l+1) {			//tai bs er maddhome komate hobe
		int mid = (l+r)/2;

		if (ok(w,h,mid,n)) r = mid;
		else l = mid;
	}
	cout << r << '\n';

	return 0;
}


/*#include <bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int w, h, n; cin >> w >> h >> n;

	if (h > w) {
		int hsum = h, mx = 0, hcount = 1;

		while (true) {
			int temp = hsum / w; cerr<<temp<<'\n';
			if ((temp * hcount) >= n) break;

			else {hsum += h; hcount++;}
		}
		cout << hsum << '\n';
	}
	else if (h==w) {
		int hcount = 1;
		while (hcount*hcount < n) {
			hcount++;
		}
		cout << hcount*h << '\n';
	}
	else {
		int wsum = w, mx = 0, wcount = 1;
		
		while (true) {
			int temp = wsum / h; cerr<<temp<<'\n';
			if ((temp * wcount) >= n) break;

			else {wsum += w; wcount++;}
		}
		cout << wsum << '\n';
	}
	return 0;
}*/