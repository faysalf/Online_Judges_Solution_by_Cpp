#include <bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c; cin >> a >> b >> c;

	if (pow(a, 2) + pow(b,2) < pow(c,2)) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}

	return 0;
}