#include<stdio.h>
int n;
int arr[1005];
int res;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=n;++i){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1])++res;
    }
    printf("%d",res);
    return 0;
}