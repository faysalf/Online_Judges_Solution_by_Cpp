#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	map<string, string> mp;
	map<string, string> res;
	while (t--) {
		string s, ss;
		cin >> s >> ss;
		
		if (mp[s] == "") {
			res[s] = ss;
			mp[ss] = s;
		}else {
			res[mp[s]] = ss;	//Due to reverse mp
			mp[ss] = mp[s];		//mp[s] -> prev first
		}
	}
	cout << res.size() << '\n';
	for (auto [i,j]:res) {
		cout << i << ' ' << j << '\n';
	}

	return 0;
}











/* WA
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	map<string, string> mp;
	while (t--) {
		string s, ss;
		
		cin >> s >> ss;
		mp[s] = ss;
	}
	int count = 0;
	
	for (auto [i,j]:mp) {
		if (mp[j] != "") {
			mp[i] = mp[j];
			mp[j] = "achhe";
		}
		mp[j] = "achhe";
	}
	map <string, string> result;
	for (auto [i,j]:mp) {
		if (j != "achhe") {
			result[i] = j;
			count++;
		}
	}
	cout << count << '\n';
	for (auto [i,j]:result) {
		cout << i << ' ' << j << '\n';
	}
	return 0;
}
*/