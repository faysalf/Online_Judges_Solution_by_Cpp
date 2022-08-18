#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	cin.ignore();

	while (t--) {
		string s, word;
		getline(cin, s);
		stringstream ss(s);
		ss << s;
		while (ss >> word) {
			reverse(word.begin(), word.end());
			cout << word << ' ';
		}
		cout << '\n';
	}

	return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// int32_t main() {
// 	ios_base::sync_with_stdio(0);
// 	cin.tie(0);

// 	int t; cin >> t;
// 	cin.ignore();

// 	while (t--) {
// 		string s, word = "";
// 		getline(cin, s);
		
// 		for (int i=0; i<s.size(); i++) {
// 			if (s[i] == ' ') {
// 				reverse(word.begin(), word.end());
// 				cout << word << ' ';
// 				word = "";
// 			}
// 			else if (i == s.size()-1) {
// 				word += s[s.size()-1];
// 				reverse(word.begin(), word.end());
// 				cout << word << ' ';
// 			}
// 			else word += s[i];
// 		}
// 		cout  << '\n';
// 	}

// 	return 0;
// }