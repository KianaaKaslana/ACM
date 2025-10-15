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
    int n;
    cin>>n;
    string s,t;
    cin>>s>>t;
    for(int i=0;i<n-1;i++){
        if(s[i]==t[i] && s[i]=='1'){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
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

