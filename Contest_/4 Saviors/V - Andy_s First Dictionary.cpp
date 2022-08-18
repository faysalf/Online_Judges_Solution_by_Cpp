#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	set <string> st;
	string s;

	while (getline(cin, s)) {
		string word;
		word = "";
		for (int i=0; i<s.size(); i++) {
			if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) {	//isalpha()
				word += tolower(s[i]);
			}
			else {
				st.insert(word);
				word = "";
			}
		}
		if (!word.empty()) st.insert(word);
	}
	for (string i:st) {
		if (i != "") cout << i << '\n';
	}
	cerr << *(st.begin()) << '\n';
	return 0;
}