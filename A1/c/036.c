#include<stdio.h>
int n;
int main(){
    scanf("%d",&n);
    n-=n%10;
    for(int i=n;i>=0;i-=10){
        printf("%d ",i);
    }
    return 0;
}