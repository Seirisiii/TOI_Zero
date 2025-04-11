#include<stdio.h>
int a,b,c;
int main(){
    scanf("%d%d%d",&a,&b,&c);
    if(a<b && b<c)printf("increasing");
    else if(a>b && b>c)printf("decreasing");
    else printf("neither");
    return 0;
}