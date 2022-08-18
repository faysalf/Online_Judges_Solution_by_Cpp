#include <bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int s, t, sum = 0;
	cin >> s >> t;
	for (int i = 0; i <= 100; i++) {
		for (int j=0; j<=100; j++) {
			for (int k=0; k<=100; k++) {
				if (i+j+k <= s && i*j*k <= t) {
					sum ++;
				}
			}
		}
	}
	cout << sum << '\n';

	return 0;
}