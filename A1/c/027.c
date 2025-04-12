#include<stdio.h>
#include<ctype.h>
char a,b,c,d,e;
int main(){
    scanf(" %c%c%c%c%c",&a,&b,&c,&d,&e);
    a=tolower(a);
    b=tolower(b);
    c=tolower(c);
    d=tolower(d);
    e=tolower(e);
    printf("%c%c%c%c%c",e,d,c,b,a);
    return 0;
}