#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mx = 1e5 + 5;
int arr[mx];
bool BS(int l, int r, int k) {
	if (l > r) return false;

	int mid = (l+r)/2;
	if (arr[mid]==k) return true;
	if (arr[mid] > k) {
		return BS(l,mid-1, k);
	}
	else {
		return BS(mid+1, r, k);
	}
}
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k; cin >> n >> k;
	for (int i=1; i<=n; i++) {
		cin >> arr[i];
	}
	for (int i=0; i<k; i++) {
		int m; cin >> m;
		if (BS(1,n,m)) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}