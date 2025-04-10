#include<stdio.h>
int a,b;
int main(){
    scanf("%d%d",&a,&b);
    if(a%b==0)printf("yes");
    else printf("no");
    return 0;
}