#include <bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int a, main, sell; cin >> main >> sell;

	a = main - sell;
	
	double res = (a * 100) / double(main);
	cout << res << '\n';


	return 0;
}