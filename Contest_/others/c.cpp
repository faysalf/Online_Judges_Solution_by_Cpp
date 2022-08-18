#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int pre = 2;
    cout << pre << " ";
    int i= 0;
    while (i < n-1){
        cout << (pre*2 +1) <<" ";
        pre = pre*2;
        i += 1;
    }

    return 0;

}

