#include <bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a, b, t;
	cin >> a >> b >> t;
	int res = (t+0.5)/a;
	cout << res * b<< '\n';

	return 0;
}