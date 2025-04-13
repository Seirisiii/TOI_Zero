#include<stdio.h>
int n;
int cnt[305];
int res;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        int x;
        scanf("%d",&x);
        ++cnt[x];
        res=cnt[x]>res?cnt[x]:res;
    }
    printf("%d",res);
    return 0;
}