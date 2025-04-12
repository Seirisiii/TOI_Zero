#include<stdio.h>
int n;
long long res=1;
int main(){
    scanf("%d",&n);
    for(int i=2;i<=n;++i){
        res*=(long long)i;
    }
    printf("%lld",res);
    return 0;
}