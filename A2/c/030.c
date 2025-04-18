#include<stdio.h>
int arr[5][5];
int I=-1;
int J=-1;
int main(){
    for(int i=0;i<5;++i){
        int res=0;
        for(int j=0;j<5;++j){
            scanf("%d",&arr[i][j]);
            res+=arr[i][j];
        }
        if(res%2)I=i;
    }
    for(int j=0;j<5;++j){
        int res=0;
        for(int i=0;i<5;++i){
            res+=arr[i][j];
        }
        if(res%2)J=j;
    }
    printf("%d %d",I,J);
    return 0;
}
