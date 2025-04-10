#include<bits/stdc++.h>
using namespace std;
int n,k;
int res=INT_MAX;
int a[305];
int b[305];
int c[305];
int d[305];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=0;i<n;++i)cin>>a[i];
    for(int i=0;i<n;++i)cin>>b[i];
    for(int i=0;i<n;++i)cin>>c[i];
    for(int i=0;i<n;++i)cin>>d[i];
    sort(a,a+n);
    sort(b,b+n);
    sort(c,c+n);
    sort(d,d+n);
    for(int i=0;i<=k;++i){
        if(i>n or k-i>n)continue;
        int mx=0;
        for(int j=0;j<i;++j)mx=max(mx,a[j]+c[i-j-1]);
        for(int j=0;j<k-i;++j)mx=max(mx,b[j]+d[k-i-j-1]);
        res=min(res,mx);
    }
    cout<<res;
    return 0;
}