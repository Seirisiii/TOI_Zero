#include<stdio.h>
#include<string.h>
#include<limits.h>
int n;
int res;
char s[1005];
int mx=INT_MIN;
int main(){
    scanf("%d",&n);
    while(n--){
        char str[1005]={};
        int w;
        scanf("%s%d",str,&w);
        if(w>15)++res;
        if(w>mx){
            mx=w;
            strcpy(s,str);
        }
    }
    printf("%d\n%s %d",res,s,mx);
    return 0;
}
