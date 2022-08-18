#include <bits/stdc++.h>
using namespace std;
const int mx = 1e5 + 5;
#define int long long int

int arr[mx];
int leftMost(int l, int r, int q) {
	if (l > r) return 1;
	int mid = (l+r)/2;
 
	if (q <= arr[mid] && q > arr[mid-1]) return mid;
 
	else if (q <= arr[mid]) return leftMost(l,mid-1, q);

	else if (q > arr[mid]) return leftMost(mid+1,r,q);
	
	else return leftMost(l,mid-1,q);	//left most
}
 
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	int m, n, k; cin >> n>> k;
	for (int i=1; i<=n; i++) {
		cin >> arr[i];
	}
	for (int i=0; i<k; i++) {
		cin >> m;
		if (m > arr[n]) cout << n+1 << '\n';

		else if (m < arr[1]) cout << 1 << '\n';

		else cout << leftMost(1,n,m) << '\n';
	}
 
	return 0;
}
