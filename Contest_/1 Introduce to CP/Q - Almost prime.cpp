//which number has exactly 2 prime devisors

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
	if (n==2 || n==3) return 1;
	if (n%2 == 0) return 0;
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i == 0) return 0;
	}
	return 1;
}

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, count = 0; cin >> n;
	for (int i=6; i<=n; i++) {
		int tempC = 0;
		for (int j=2; j<(i); j++) {
			if (i%j == 0 && isPrime(j)) {
				tempC++;
			}
		}
		if (tempC == 2) count++;
	}
	cout << count << '\n';

	return 0;
}