#include <bits/stdc++.h>
using namespace std;

void print(vector <int> v) {
	for (int i:v) {
		cout << i;
		if (i != *(v.end()-1)) cout << ' ';
	}cout << '\n';
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	vector <int> vec;

	int n; cin >> n;
	for (int i=1; i<=n; i++) {
		int j; cin >> j;
		vec.push_back(j);
	}
	int m,l,r; cin >> m >> l >> r;
	vec.erase(vec.begin()+m-1);
	vec.erase(vec.begin()+l-1, vec.begin()+r-1);
	
	cout << vec.size() << '\n';
	print(vec);
	return 0;
}