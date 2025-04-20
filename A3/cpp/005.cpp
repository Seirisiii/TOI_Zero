#include<bits/stdc++.h>
using namespace std;
int n,m;
int qs[1000005];
int res;
int main(){
    cin>>n>>m;
    for(int i=0;i<m;++i){
        int s,t;
        cin>>s>>t;
        ++qs[s];
        --qs[t+1];
    }
    for(int i=1;i<=n;++i){
        qs[i]+=qs[i-1];
        res=max(qs[i],res);
    }
    cout<<res;
    return 0;
}