#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c;

    cin>>a>>b>>c;

    int result = a*b*c;
    int resul = (a+b)*c;
    int resu = a*(b+c);
    int res = a+b+c;

    cout << max({result, resul, resu, res});
}
