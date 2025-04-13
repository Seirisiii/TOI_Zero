#include<stdio.h>
int n;
int p[200005];
int v[200005];
int prev;
int res;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d%d",&p[i],&v[i]);
    }
    prev=v[n-1];
    for(int i=n-2;i>=0;--i){
        if(v[i]<=prev)++res;
        else prev=v[i];
    }
    printf("%d",res);
    return 0;
}