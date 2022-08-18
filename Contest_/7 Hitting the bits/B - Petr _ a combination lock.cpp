#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int arr[n];

	for (int i=0; i<n; i++) {
		cin >> arr[i];
	}
	for (int mask=0; mask<(1<<n); mask++) {
		int sum = 0;
		for (int i=0; i<n; i++) {
			if ((mask >> i) & 1) sum += arr[i];	//if else cond er maddhome amra on bitgulo nitechhi, off bitgulo
			else sum -= arr[i];					//minus kortechhi. means kichhu num nicchi, kichhu minus korchhi
		}
		if (sum%360 == 0) return cout << "YES\n",0;
	}
	cout << "NO\n";
}