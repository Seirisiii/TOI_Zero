#include<stdio.h>
int n;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        if(i%5==0)printf("X");
        else printf("*");
    }
    return 0;
}