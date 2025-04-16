#include<stdio.h>
int a,b,c;
int x;
int main(){
    scanf("%d%d%d%d",&a,&b,&c,&x);
    printf("%d\n%d",(a+b+a+b)*c,(a+b+a+b)*c*x);
    return 0;
}