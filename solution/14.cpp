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
int ask(int a,int b){
    cout<<"? "<<a<<" "<<b<<endl;
    cout.flush();
    int y;
    cin>>y;
    return y;
}
void solve() {
    int n;
    cin>>n;
    int flag=0;
    map<int,int>mp;
    int mx=0,mn=0;
    for(int i=1;i<=n;i++){
        cin>>sz[i];
        mp[sz[i]]++;
        if(sz[i]==1){
            mn=i;
        }
        if(sz[i]==n){
            mx=i;
        }
    }
    int ks=0,js=0;
    for(int i=1;i<=n;i++){
        if(mp[i]==0){
            ks=i;
            flag=1;
        }
        else{
            js=i;
        }
    }
    if(flag){
        int o=ask(ks,js);
        if(o==0){
            cout<<"! A"<<endl;
            cout.flush();
            return;
        }
        else{
            cout<<"! B"<<endl;
            cout.flush();
            return;
        }
    }
    else{
        int p=ask(mx,mn);
        int q=ask(mn,mx);
        if(p!=q){
            cout<<"! A"<<endl;
            cout.flush();
            return;
        }
        else{
            if(p<n-1){
                cout<<"! A"<<endl;
                cout.flush();
                return;
            }
            else{
                cout<<"! B"<<endl;
                cout.flush();
                return;
            }
        }
    }

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

