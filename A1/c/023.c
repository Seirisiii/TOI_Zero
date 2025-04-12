#include<stdio.h>
int n;
char c;
int main(){
    scanf("%d %c",&n,&c);
    if(c=='c' || c=='C'){
        if(n<=0)printf("solid");
        else if(n<100)printf("liquid");
        else printf("gas");
    }
    else if(c=='f' || c=='F'){
        if(n<=32)printf("solid");
        else if(n<212)printf("liquid");
        else printf("gas");
    }
    return 0;
}