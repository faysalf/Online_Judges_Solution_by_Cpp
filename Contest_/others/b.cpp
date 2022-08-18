#include <iostream>
using namespace std;

long long gcd(int a, int b){
    if (a==0)
        return b;
    else
        return gcd(b%a, a);
}

int main(){
    long long int a,b;
    cin >>a>>b;

    cout << gcd(a,b)<<"\n";

return 0;
}
