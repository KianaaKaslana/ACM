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
#define maxn 2000005
#define endl '\n'
using namespace std;
const ll mod=1e9+7;
ll ksm(ll a,ll b){
    ll temp=a;
    ll ans=1;
    while(b){
        if(b%2==1){
            ans=(ans*temp)%mod;
        }
        temp=(temp*temp)%mod;
        b=b>>1;
    }
    return ans%mod;
}
void solve() {
    ll n,m,k;
    cin>>n>>m>>k;
    ll sum=0;
    ll p=m;
    while(m--){
        ll u,v,f;
        cin>>u>>v>>f;
        sum+=f;
        sum=sum%mod;
    }
    ll ans=0;
    ll pp=ksm(n*(n-1)%mod,mod-2)%mod;
    while(k--){
        ans=(ans+2*sum*pp)%mod;
        sum=(sum+2*p*pp)%mod;
    }
    cout<<ans<<endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
    int a = 1;
    cin >> a;
    while (a--) {
        solve();
    }
    return 0;
}

