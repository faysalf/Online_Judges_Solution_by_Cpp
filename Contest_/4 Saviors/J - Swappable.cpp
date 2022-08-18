//AC
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	map<int, long long> mp;
	int n; cin >>n;
	for (int i=0; i<n; i++) {
		int r; cin >> r;
		mp[r]++;
	}
	//long long count = (n*(n-1))/2;
	long long count = 0;
	for (auto [i,j]:mp) {
		//count -= (i.second * (i.second - 1))/2;
		count += (long long) ((n-j)*j);
	}

	cout << count/2 << '\n';

	return 0;
}



/*
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	map<int, long long> mp;
	int n; cin >>n;
	for (int i=0; i<n; i++) {
		int r; cin >> r;
		mp[r]++;
	}
	long long count = (n * (n-1))/2;
	for (auto [i,j]:mp) {
		count -= (long long) (j * (j-1)) / 2;
	}

	cout << count << '\n';

	return 0;
}*/