#include<stdio.h>
int l,n;
int res;
int main(){
    scanf("%d%d",&l,&n);
    while(n>0){
        ++res;
        n-=(res*l*l)-((l-1)*l/2);
    }
    printf("%d",res);
    return 0;
}