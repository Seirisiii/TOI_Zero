#include<stdio.h>
char a,b,c;
int res;
int main(){
    scanf(" %c%c%c",&a,&b,&c);
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')++res;
    if(b=='a' || b=='e' || b=='i' || b=='o' || b=='u')++res;
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')++res;
    printf("%d",res);
    return 0;
}