#include<stdio.h>
int n;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        if(i==0 || i==n-1){
            for(int j=0;j<=i;++j){
                printf("0 ");
            }
        }
        else{
            for(int j=0;j<=i;++j){
                if(j==0 || j==i)printf("0 ");
                else printf("1 ");
            }
        }
        printf("\n");
    }
    return 0;
}
