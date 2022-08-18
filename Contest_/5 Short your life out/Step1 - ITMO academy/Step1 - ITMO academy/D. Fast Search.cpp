#include <bits/stdc++.h>
using namespace std;

int lower(vector<int> &v, int x) {
	int l = -1, r = v.size();
	while (l+1 < r) {
		int mid = (l+r)/2;
		if (v[mid] > x) r = mid;
		else l = mid;
	}
	return l;
}

int upper(vector<int> &v, int x) {
	int l = -1, r = v.size();
	while (l+1 < r) {
		int mid = (l+r)/2;
		if (v[mid] < x) l = mid;
		else r = mid;
	}
	return r;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;

	vector <int> arr(n);

	for (auto &x:arr) {
		cin >> x;
	}
	sort(arr.begin(), arr.end());
	
	int k; cin >> k;
	while (k--) {
		int l, r; cin >> l >> r;
		int a = upper(arr, l);
		int b = lower(arr, r);
		cout << b-a + 1<< '\n';
	}
	
	return 0;
}

















/*
#include <bits/stdc++.h>
using namespace std;
const int mx = 10;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k, l, r; cin >> n;

	vector <int> arr(n);
	map <int, int> res;

	for (int i=0; i<n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	
	int count = 1;
	for (int i=0; i<n; i++, count++) {
		res[arr[i]] = count;
	}
	cin >> k;
	while (k--) {
		cin >> l >> r;
		int ll = 0, rr=0;
		bool ls = true, rs = true;
		for (int i=l, j=r; i<n, j>0; i++, j--) {
			if (!ls && !rs) break;
			if (res[i] != 0 && ls) { ll = res[i]; ls = false;}
			if (res[j] != 0 && rs) { rr = res[j]; rs = false;}
		}
		
		if (ll == *arr.begin()) cout << rr << '\n';
		else cout << rr - ll+1 << '\n';
		cerr << rr << ' '<< ll<< '\n';
	}
	return 0;
}*/