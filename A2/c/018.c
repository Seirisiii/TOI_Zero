#include<stdio.h>
#include<string.h>
char c;
int n;
char *s[3]={"Red","Green","Blue"};
int idx;
int main(){
    scanf(" %c %d",&c,&n);
    if(c=='R')idx=0;
    else if(c=='G')idx=1;
    else if(c=='B')idx=2;
    while(n--){
        printf("%s ",s[idx]);
        ++idx;
        idx%=3;
    }
    return 0;
}