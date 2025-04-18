#include<stdio.h>
char a,b,c;
int res;
int main(){
    scanf(" %c %c",&a,&b);
    if(a=='S'){
        if(b=='R')res=60;
        else if(b=='T')res=80;
    }
    else if(a=='M'){
        if(b=='R')res=80;
        else if(b=='T')res=100;
    }
    else if(a=='L'){
        if(b=='R')res=100;
        else if(b=='T')res=120;
    }
    scanf(" %c",&c);
    if(c=='P'){
        int x;
        scanf("%d",&x);
        res+=15*x;
    }
    else if(c=='E'){
        int x;
        scanf("%d",&x);
        res+=10*x;
    }
    printf("%d",res);
    return 0;
}