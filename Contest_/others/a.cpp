#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int cou = 0;

    for (int i=1; i<=n; i++){
        if (i%2==0 && i%3==0 && i%4==0 && i%5==0 && i%6==0
            && i%7==0 && i%8==0 && i%9==0 && i%10==0){
                cou += 1;
            }
    }
    cout << cou << "\n";
    return 0;

}
