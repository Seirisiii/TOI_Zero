#include<stdio.h>
int n;
int res;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        char c;
        scanf(" %c",&c);
        if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')++res;
    }
    printf("%d",res);
    return 0;
}