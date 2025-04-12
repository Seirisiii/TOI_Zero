#include<stdio.h>
int n;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        printf("*");
    }
    printf("\n");
    for(int i=0;i<n-2;++i){
        printf("*");
    }
    printf("\n");
    for(int i=0;i<n-4;++i){
        printf("*");
    }
    printf("\n");
    return 0;
}