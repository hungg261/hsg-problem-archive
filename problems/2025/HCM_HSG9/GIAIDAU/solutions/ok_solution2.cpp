#include<bits/stdc++.h>
#define int long long
using namespace std;

const int MAXN=1e5;
int a[MAXN+5],n,q,prefix[MAXN+5];

void solve(){
    int u,v;
    cin>>u>>v;
    
    int low=u,high=v;
    int ans=1e18;
    while(low<=high){
        int mid=(low+high)/2;
        int left=prefix[mid]-prefix[u-1],
            right=prefix[v]-prefix[mid];
        
        ans=min(ans,llabs(right-left));
        if(left<right){
            low=mid+1;
        }
        else if(left>right){
            high=mid-1;
        }
        else break;
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
