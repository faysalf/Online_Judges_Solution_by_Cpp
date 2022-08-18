#include <bits/stdc++.h>
using namespace std;

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	long long res, a, b, c, d, e;
	cin >> a >> b >> c;

	res = 0;
	
	for (int i=0; i<1000; i++) {
		d = c - (a*i);
		e = c - (b*i);
		if (d < 0 || e < 0) {
			res = 0;
			break;
		}
		if (d%b == 0 || e%a == 0) {
			res = 1;
			break;
		}
	}
	if (res) cout << "Yes\n";
	else cout << "No\n";

	return 0;
}


/* ///AC
int main()
{
    ll m,n,k,i,j,ans,d;
    while(cin>>m>>n>>k)
    {
        ans=0;
        for(int i=0; i<1000; i++)
        {
            d=(k-(m*i));
            if(d<0){ans=0;break;}
            if (d%n==0 ) { ans=1;break;}
        }

        if(ans)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }

}*/