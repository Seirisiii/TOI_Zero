#include<stdio.h>
int a,b,c;
int main(){
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c && a==c)printf("all the same");
    else if(a!=b && b!=c && a!=c)printf("all different");
    else printf("neither");
    return 0;
}