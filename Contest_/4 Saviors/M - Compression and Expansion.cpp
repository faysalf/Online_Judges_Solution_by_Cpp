#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int>s;
		for (int i=0; i<n; i++) {
			int a; cin >> a;
			if (a==1) s.push_back(a);				  //for 1, do nothing. push back and back
			else {
				while (s.back() != a-1) s.pop_back(); //untill equal 'back' to a-1. cause order
				s.pop_back();						  //And pop prev value and push new sequence val where it's fit
				s.push_back(a);
			}
			cout << s[0];							//cout all element with .
			for (int i=1; i<s.size(); i++) {
				cout << '.'<<s[i];
			}
			cout << '\n';
		}
	}

	return 0;
}