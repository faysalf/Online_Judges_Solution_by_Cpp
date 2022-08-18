#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int N,mask;
	long long ans=0;
	string s;
	map<int,int> mp;
	cin>>N;
	for(int t=0;t<N;t++,mask=0){
		cin>>s;
		for(int i=0;i<s.length();i++)  mask^=1<<(s[i]);
		for(int i=97;i<123;i++)  ans+=mp[mask^(1<<i)];
		ans+=mp[mask]++;
	}
	cout<<ans << '\n';

	return 0;
}

//solved by me wrong answer on test 5
// #include <bits/stdc++.h>
// using namespace std;

// int32_t main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int t; cin >> t;
// 	int z = t;
// 	vector<string> st;
// 	while (z--) {
// 		string s; cin >> s;
// 		st.push_back(s);
// 	}
// 	int count = 0;
// 	for (int i=0; i<t; i++) {
// 		map<char, int> mp;
// 		int parity = 0;
// 		for (char ch:st[i]) {
// 			mp[ch]++;
// 			if ((mp[ch] & 1) == 0) parity--;
// 			else parity++;
// 		}
// 		cerr << parity << ' ';

// 		for (int j=i+1; j<t; j++) {
// 			map<char, int> flag;
// 			int parityB = 0;
// 			for (auto ch:st[j]) {
// 				flag[ch]++;
// 				if ((flag[ch] & 1)==0) {
					
// 					parityB--;
// 				}
// 				else {
// 					if ((mp[ch] & 1)==1) parityB--;
// 					else parityB++;
// 				}
// 			}
// 			if (parity+parityB <= 1) {
// 				cerr << st[i] << ' '<< st[j] <<' '<< parityB<< '\n';
// 				count++;
// 			}
// 		}
// 	}
// 	cout << count << '\n';

// 	return 0;
// }