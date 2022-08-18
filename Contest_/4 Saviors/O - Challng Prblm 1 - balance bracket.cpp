#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		stack<char> st;

		bool flag = true;
		for (char i:s) {
			if (i=='[' || i=='{' || i=='(') {
				st.push(i);
			}
			else if (st.size() && i==')' && st.top()=='(') {
				st.pop();
			}
			else if (st.size() && i=='}' && st.top()=='{') {
				st.pop();
			}
			else if (st.size() && i==']' && st.top()=='[') {
				st.pop();
			}
			else {
				flag = false;
				break;
			}
		}
		if (flag && st.empty()) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}







//WA - stack problem
// #include <bits/stdc++.h>
// using namespace std;

// int32_t main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int t; cin >> t;
// 	while (t--) {
// 		string s; cin >> s;
// 		bool flag = true;
		
// 		int sz = s.size();
		
// 		if ((sz&1)==1) cout << "NO\n";
// 		else {
// 			for (int i=0, j=sz-1; i<sz/2, j>=sz/2; i++, j--) {
// 				if (s[i] == '{' && s[j] != '}') flag = false;
// 				if (s[i] == '[' && s[j] != ']') flag = false;
// 				if (s[i] == '(' && s[j] != ')') flag = false;
// 			}
// 		}
// 		if (flag) cout << "YES\n";
// 		else cout << "NO\n";
// 	}

// 	return 0;
// }

// 41 40 ()
// 125 123 {}
// 93 91 []


