#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
    int a,b,c;
    cin >> a>>b>>c;

    int res = a+b+c;

    if ((res%2 == 0) && res>=4){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
    }

return 0;
}
