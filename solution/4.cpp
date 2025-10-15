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
int sz[200005];
void solve() {
    int x,y,z;
    cin>>x>>y>>z;
    int u=x*z;
    int o=z/3*y+z%3*x;
    cout<<min(u,o)<<endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
    int a = 1;
    //cin >> a;
    while (a--) {
        solve();
    }
    return 0;
}

