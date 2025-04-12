#include<bits/stdc++.h>
using namespace std;
int n;
long long res=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=2;i<=n;++i){
        res*=(long long)i;
    }
    cout<<res;
    return 0;
}