#include<stdio.h>
int a,b,c;
int res;
int main(){
    scanf("%d%d%d",&a,&b,&c);
    if(a%2)++res;
    if(b%2)++res;
    if(c%2)++res;
    printf("even %d\nodd %d",3-res,res);
    return 0;
}