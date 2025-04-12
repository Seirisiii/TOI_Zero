#include<stdio.h>
int n;
int mn=2e9;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        int x;
        scanf("%d",&x);
        mn=mn>x?x:mn;
    }
    printf("%d",mn);
    return 0;
}