#include<bits/stdc++.h>
#define int long long
using namespace std;

const int MAXN=1e5;
vector<int>a;
int n;

int gcd(vector<int>arr,int pop_idx){
    arr.erase(begin(arr)+pop_idx);
    if(arr.empty())return 0;
    
    int res=arr[0];
    for(int element:arr){
        res=__gcd(res,element);
    }
    return res;
}

void solve(){
    int ans=0;
    for(int i=0;i<n;++i){
        ans=max(ans,gcd(a,i));
    }
    cout<<ans<<'\n';
}

signed main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    cin>>n;
    a.resize(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    
    solve();
    return 0;
}
