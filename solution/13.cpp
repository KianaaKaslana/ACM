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
const int mod=998244353;
int dp[200005][2];
int sz[200005];
void solve() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        dp[i][1]=0;
        dp[i][0]=0;
        cin>>sz[i];
    }
    dp[1][0]=1;
    dp[1][1]=(sz[1]==0);
    for(int i=2;i<=n;i++){
        dp[i][0]=dp[i-1][1];
        if(sz[i]==sz[i-1]){
            dp[i][1]=(dp[i-1][1]+dp[i][1])%mod;
        }
        if(sz[i]==sz[i-2]+1){
            dp[i][1]=(dp[i][1]+dp[i-1][0])%mod;
        }
    }
    cout<<(dp[n][0]+dp[n][1])%mod<<endl;
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

