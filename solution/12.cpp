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
int ff[200005];
int sz[200005];
int find(int a){
    if(ff[a]==a){
        return ff[a];
    }
    return ff[a]=find(ff[a]);
}
int flag[200005];
void solve() {
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>sz[i];
        ff[i]=i;
    }
    while(m--){
        int u,v;
        cin>>u>>v;
        if(sz[find(u)]<sz[find(v)]){
            ff[find(v)]=find(u);
        }
        else{
            ff[find(u)]=find(v);
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(!flag[find(i)]){
            ans+=sz[find(i)];
            flag[find(i)]=1;
        }
    }
    cout<<ans<<endl;
}
signed main() {
    ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
    int a = 1;
    //cin >> a;
    while (a--) {
        solve();
    }
    return 0;
}

