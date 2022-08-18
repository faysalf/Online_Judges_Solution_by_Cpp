#include <bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;

	if (n < 10) printf("000%d\n",n);
	else if (n < 100) printf("00%d\n",n);
	else if (n < 1000) printf("0%d\n",n);
	else printf("%d\n",n);

	return 0;
}