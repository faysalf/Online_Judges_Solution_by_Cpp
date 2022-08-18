#include <bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a, b; cin >> a >> b;

	int res = b-a+1;

	if (res > 0) cout << res << '\n';
	else cout << 0 << '\n';

	return 0;
}