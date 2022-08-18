
#include <bits/stdc++.h>
using namespace std;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	
		int count = 0, f=19;
		for (int i=1; i<n; i++) {
			f += 9;
			int co = 0;
			string s = to_string(f);
			for (char i:s) {
				co += i - 48;
			}
			while (co != 10) {
				co = 0;
				f += 9;
				s = to_string(f);
				for (char i:s) {
					co +=  i-48;
				}
			}
		}
		cout << f << '\n';
	
	return 0;
}


// #include <bits/stdc++.h>
// using namespace std;
 
// int cal(int num){
// 	int ans = 0;
// 	while (num){
// 		ans += num % 10;
// 		num /= 10;
// 	}
// 	return ans;
// }
 
// int n;
// int main(){
// 	scanf("%d", &n);
// 	int ans = 0;
// 	while (n){
// 		ans ++;
// 		if (cal(ans) == 10) n--;
// 	}
// 	printf("%d\n", ans);
// }