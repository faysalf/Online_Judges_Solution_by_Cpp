#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
  	cin >> t;
  	int amf = 0, x ,y;
  	for(int i=0; i<t; i++){
    	cin >> x >> y;
    	if(y-x >= 2){
      	amf++;
    	}
  	}
  	cout << amf << '\n';

	return 0;
}