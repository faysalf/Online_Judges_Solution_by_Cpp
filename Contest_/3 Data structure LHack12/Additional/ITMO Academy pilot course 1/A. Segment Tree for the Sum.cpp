#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int N = 100005;
int arr[N];
ll tree[N*4];

void build(int node, int s, int e){
    if (s==e){
        tree[node] = arr[s];
        return;
    }
    ll left_chi = 2*node;
    ll right_chi = 2*node + 1;
    int mid = (s+e) / 2;
    build(left_chi, s, mid);
    build(right_chi, mid+1, e);
    tree[node] = tree[left_chi] + tree[right_chi];      //change this
}
ll query(int node, int s, int e, int i, int j){
    if (e<i or j<s) return 0;                           //return appropriate value

    if (s>=i and e<=j){
        return tree[node];
    }
    ll left_chi = 2*node, right_chi = 2*node + 1;
    int mid = (s+e) / 2;
    return query(left_chi,s,mid,i,j) + query(right_chi,mid+1,e,i,j);    //change this
}
void update(int node, int s, int e, int i, int x){
    if (s>i or e<i) return;
    if (s==e and s==i){
        tree[node] = x;
        return;
    }
    ll left_chi = 2*node, right_chi = 2*node + 1;
    int mid = (s+e) / 2;
    update(left_chi, s, mid,i,x);
    update(right_chi, mid+1, e, i, x);
    tree[node] = tree[left_chi] + tree[right_chi];              //change this
}
int32_t main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m; cin>>n>>m;
    for (int i=1; i<=n; i++){
        cin >> arr[i];
    }

    build(1,1,n);
    for (int j=0; j<m; j++){
        int num,i,v; cin>>num>>i>>v;
        if (num==1){
            update(1,1,n,i+1,v);
        }
        else{
            cout << query(1,1,n,i+1,v)<<'\n';
        }
    }
return 0;
}
