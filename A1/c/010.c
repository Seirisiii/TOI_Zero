#include<stdio.h>
int n;
char c;
int main(){
    scanf("%d %c",&n,&c);
    if(n<18 || c=='s' || c=='S')printf("20");
    else printf("50");
    return 0;
}