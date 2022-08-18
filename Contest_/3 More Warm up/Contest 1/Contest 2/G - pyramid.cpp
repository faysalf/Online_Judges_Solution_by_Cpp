#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int form = (2*n -1);
	int sp = form/2;

	for (int i=1; i <= form+1; i+=2) {
		for (int j=1; j <= sp; j++) {
			cout << ' ';
		}sp--;

		for (int k=1; k<= i; k++) cout << '*';
		cout << '\n';
		
	}


	return 0;
}