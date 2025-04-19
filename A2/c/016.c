#include<stdio.h>
char c;
int n;
char s;
int a;
int main(){
    scanf(" %c %d %c %d",&c,&n,&s,&a);
    if(c==s && n==a)printf("1000000");
    else if(c!=s && n==a)printf("100000");
    else if(c==s && n%1000==a%1000)printf("2000");
    else if(c==s && n%100==a%100)printf("1000");
    else if(c!=s && n%1000==a%1000)printf("200");
    else if(c!=s && n%100==a%100)printf("100");
    else if(c==s && n!=a)printf("20");
    else printf("0");
    return 0;
}