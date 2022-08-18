
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int cou = 0;
    int pre = 0;
    int flag = 0;
    int arr[n] = {};
    for (int i=0; i<n; i++){
        cin >> arr[i];

        if (arr[i] >= flag){
            cou += 1;
            flag = arr[i];
        }else{
            if (pre<cou){
                pre = cou;
                cou = 1;
                flag = arr[i];
            }else{
                cou = 1;
                flag = arr[i];
            }
        }
    }

    cout << max(pre,cou);



    return 0;
}
