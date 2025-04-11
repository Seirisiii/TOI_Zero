#include<stdio.h>
int a;
char op;
int main(){
    scanf("%d",&a);
    scanf(" %c",&op);
    int b=10*(a%10)+a/10;
    if(op=='+')printf("%d + %d = %d",a,b,a+b);
    else if(op=='*')printf("%d * %d = %d",a,b,a*b);
    return 0;
}