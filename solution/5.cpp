#include<iostream>
#include<map>
#include<algorithm>
#include<vector>
#include<stack>
#include<set>
#include<math.h>
#include<string>
#include<deque>
#define ll long long
#define maxn 2000005
using namespace std;
void solve(){
    string a;
    cin>>a;
    int i=0,ans=0;
    while(i<a.length()){
        if(i<a.length() && a[i]=='0' && a[i+1]=='0'){
            i++;
        }
        ans++;
        i++;
    }
    cout<<ans<<endl;
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0), cout.tie(0);
    int a=1;
    //cin>>a;
    while(a--){
        solve();
    }
    return 0;
}

