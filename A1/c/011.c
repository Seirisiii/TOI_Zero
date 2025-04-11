#include<stdio.h>
#include<string.h>
char s[5];
int main(){
    scanf(" %s",s);
    int sz=strlen(s);
    int cnt=1;
    char prev=s[0];
    for(int i=1;i<sz;++i){
        if(s[i]!=prev){
            printf("%d%c",cnt,prev);
            cnt=0;
        }
        prev=s[i];
        ++cnt;
    }
    if(cnt>0)printf("%d%c",cnt,prev);
    return 0;
}