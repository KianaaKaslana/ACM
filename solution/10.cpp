#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
#include<stack>
#include<set>
#include<math.h>
#include<string>
#include<deque>
#include<iomanip>
#include<string.h>
#include<queue>
#define ll long long
#define int ll
#define maxn 2000005
#define endl '\n'
using namespace std;
int sz[200005];
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}
void solve() {
    int n;
    cin>>n;
    int o=0,j=0;
    for(int i=0;i<n;i++){
        cin>>sz[i];
        if(i%2==0){
            o=gcd(o,sz[i]);
        }
        else{
            j=gcd(j,sz[i]);
        }
    }
    int flag1=1,flag2=1;
    for(int i=0;i<n;i++){
        if(i%2==0){
            if(sz[i]%j==0){
                flag1=0;
            }
        }
        else{
            if(sz[i]%o==0){
                flag2=0;
            }
        }
    }
    if(flag1==0 && flag2==0){
        cout<<0<<endl;
    }
    else if(flag2==0){
        cout<<j<<endl;
    }
    else{
        cout<<o<<endl;
    }
}
signed main() {
    ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
    int a = 1;
    cin >> a;
    while (a--) {
        solve();
    }
    return 0;
}
