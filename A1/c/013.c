#include<stdio.h>
char c;
int n;
int main(){
    scanf(" %c%d",&c,&n);
    if(c=='H' && n==4567)printf("safe unlocked");
    else if(c=='H' && n!=4567)printf("safe locked - change digit");
    else if(c!='H' && n==4567)printf("safe locked - change char");
    else printf("safe locked");
    return 0;
}