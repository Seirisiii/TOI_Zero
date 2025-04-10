#include<stdio.h>
int a,b,c;
int main(){
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && a>=c)printf("%d",a);
    else if(b>=a && b>=c)printf("%d",b);
    else if(c>=a && c>=b)printf("%d",c);
    return 0;
}