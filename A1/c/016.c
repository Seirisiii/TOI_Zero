#include<stdio.h>
#include<string.h>
char s[1005];
int main(){
    scanf(" %s",s);
    if(s[2]=='1' && s[3]=='6')printf("yes");
    else printf("no");
    return 0;
}