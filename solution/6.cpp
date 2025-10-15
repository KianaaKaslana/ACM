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
    for(int i=0;i<n;i++){
        cin>>sz[i];
    }
    sort(sz,sz+n);
    for(int i=1;i<n;i++){
        if(sz[i]-sz[i-1]>1){
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
