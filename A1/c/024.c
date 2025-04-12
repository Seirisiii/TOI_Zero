#include<stdio.h>
int n;
int c;
int main(){
    scanf("%d%d",&n,&c);
    if(n<=1990){
        if(c<=1500)printf("1250");
        else if(c<=2000)printf("1400");
        else printf("2000");
    }
    else if(n<2000){
        if(c<=1500)printf("1100");
        else if(c<=2000)printf("1300");
        else printf("1700");
    }
    else{
        if(c<=1500)printf("1000");
        else if(c<=2000)printf("1200");
        else printf("1500");
    }
    return 0;
}