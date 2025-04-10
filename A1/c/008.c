#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char s[1005];
int main(){
    scanf(" %s",s);
    if(strlen(s)==13)printf("yes");
    else printf("no");
    return 0;
}