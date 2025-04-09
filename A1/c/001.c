#include<stdio.h>
#include<string.h>
char s1[10000];
char s2[10000];
int main(){
    scanf("%s %s",s1,s2);
    printf("Hello %s %s\n%c%c%c%c",s1,s2,s1[0],s1[1],s2[0],s2[1]);
    return 0;
}