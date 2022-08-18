//both are accepted. but below was using library func. 1st one: using binary search

#include <bits/stdc++.h>
using namespace std;
const int mx = 1e5 + 5;
#define int long long int
 
int arr[mx];
int rightMost(int l, int r, int q) {
	if (l > r) return 0;
	int mid = (l+r)/2;
 
	if (q < arr[mid] && q >= arr[mid-1]) return mid-1;
 
	else if (q >= arr[mid]) return rightMost(mid+1,r,q);
 
	else if (q < arr[mid]) return rightMost(l,mid-1, q);
	
	else {
		return rightMost(mid+1,r,q);
	}
}
 
int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
 
	int n, k; cin >> n>> k;
	for (int i=1; i<=n; i++) {
		cin >> arr[i];
	}
	for (int i=0; i<k; i++) {
		int m; cin >> m;
		if (m >= arr[n]) cout << n << '\n';
		else if (m < arr[1]) cout << 0 << '\n';
		else cout << rightMost(1,n,m) << '\n';
	}
 
	return 0;
}



/*#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int m, n, k; cin >> n>> k;
	vector <int> arr(n);
	for (int i=0; i<n; i++) {
		cin >> arr[i];
	}
	for (int i=0; i<n; i++) {
		cin >> m;
		// if (m >= arr[n]) cout << n << '\n';
		// else if (m < arr[0]) cout << 0 << '\n';
		auto it = upper_bound(arr.begin(), arr.end(), m);
		cout << it - arr.begin() << '\n';
	}

	return 0;
}*/