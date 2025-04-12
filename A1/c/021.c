#include<stdio.h>
int n;
int main(){
    scanf("%d",&n);
    if(n==1500)printf("yes");
    else if(n%4==0 && n%100==0 && n%400==0)printf("yes");
    else if(n%4==0 && n%100==0)printf("no");
    else if(n%4==0)printf("yes");
    else printf("no");
    return 0;
}