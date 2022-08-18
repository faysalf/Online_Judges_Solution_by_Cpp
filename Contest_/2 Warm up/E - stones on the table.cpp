#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	string s; cin >> s;

	int count = 0;
	for (int i=0; i<n-1; i++) {
		if ((s[i] == 'R' && s[i+1] == 'R')
			|| (s[i] == 'G' && s[i+1] == 'G')
			|| (s[i] == 'B' && s[i+1] == 'B')) {
			count++;
		}
	}
	cout << count << '\n';

	return 0;
}