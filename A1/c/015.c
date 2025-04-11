#include<stdio.h>
#include<string.h>
char s1[1005];
char s2[1005];
int age;
int main(){
    scanf(" %s%s%d",s1,s2,&age);
    int z1=strlen(s1);
    int z2=strlen(s2);
    if(z1>5 && z2>5)printf("%c%c%c%d",s1[0],s1[1],s2[z2-1],age%10);
    else printf("%c%d%c",s1[0],age,s2[z2-1]);
    return 0;
}