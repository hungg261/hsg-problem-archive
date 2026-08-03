#include<bits/stdc++.h>
#define int long long
using namespace std;

const int MAXN=1e5;
int a[MAXN+5],n,q,prefix[MAXN+5];

void solve(){
    int u,v;
    cin>>u>>v;
    
    int ans=1e18;
    for(int i=u;i<v;++i){
        ans=min(ans,llabs((prefix[v]-prefix[i])-(prefix[i]-prefix[u-1])));
    }
    cout<<ans<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n>>q;
    for(int i=1;i<=n;++i){
        cin>>a[i];
        prefix[i]=prefix[i-1]+a[i];
    }
    
    while(q--){
        solve();
    }
    return 0;
}
