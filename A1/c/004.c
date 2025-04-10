#include<stdio.h>
int a,b,c;
int main(){
    scanf("%d%d%d",&a,&b,&c);
    if(a>=5 && b>=20 && c>=25)printf("pass");
    else printf("fail");
    return 0;
}