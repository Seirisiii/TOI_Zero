#include<stdio.h>
#include<stdlib.h>
int n,m;
int qs[1000005];
int res;
int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;++i){
        int s,t;
        scanf("%d%d",&s,&t);
        ++qs[s];
        --qs[t+1];
    }
    for(int i=1;i<=n;++i){
        qs[i]+=qs[i-1];
        res=qs[i]>res?qs[i]:res;
    }
    printf("%d",res);
    return 0;
}