#include<stdio.h>
int n;
int main(){
    scanf("%d",&n);
    if(n<0)printf("Error : Please input positive number");
    else if(n==1)printf("I");
    else if(n==2)printf("II");
    else if(n==3)printf("III");
    else if(n==4)printf("IV");
    else if(n==5)printf("V");
    else if(n==6)printf("VI");
    else if(n==7)printf("VII");
    else if(n==8)printf("VIII");
    else if(n==9)printf("IX");
    else printf("Error : Out of range");
    return 0;
}