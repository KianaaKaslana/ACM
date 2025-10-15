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
int sz[1000005];
int sum[1000005];
void solve() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int l, r;
        cin >> l >> r;
        sz[l]++;
        sz[r+1]--;
    }
    
    int mn = 1e9;
    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i - 1] + sz[i];
        mn = min(mn, sum[i]);
    }
    cout << mn << endl;
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

