#include<stdio.h>
#include<string.h>
#include<ctype.h>
char s[5];
int main(){
    scanf(" %s",s);
    if(strlen(s)==3){
        s[2]=toupper(s[2]);
        printf("10 of ");
        if(s[2]=='D')printf("diamonds");
        else if(s[2]=='H')printf("hearts");
        else if(s[2]=='S')printf("spades");
        else if(s[2]=='C')printf("clubs");
    }
    else{
        s[0]=toupper(s[0]);
        s[1]=toupper(s[1]);
        if(s[0]>='2' && s[0]<='9')printf("%c of ",s[0]);
        else if(s[0]=='A')printf("ace of ");
        else if(s[0]=='J')printf("jack of ");
        else if(s[0]=='Q')printf("queen of ");
        else if(s[0]=='K')printf("king of ");
        if(s[1]=='D')printf("diamonds");
        else if(s[1]=='H')printf("hearts");
        else if(s[1]=='S')printf("spades");
        else if(s[1]=='C')printf("clubs");
    }
    return 0;
}