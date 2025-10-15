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
int x[200005];
int y[200005];
void solve() {
    int n,p1,p2,t;
    cin>>n>>p1>>p2>>t;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(i!=0){
            ans+=(x[i]-y[i-1])*p2;
        }
        if(i!=n-1){
            y[i]+=min(t,x[i+1]-y[i]);
        }
        ans+=(y[i]-x[i])*p1;
        
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

