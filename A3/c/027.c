#include<stdio.h>
int r,c;
char a[1005][1005];
char b[1005][1005];
int main(){
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            scanf(" %c",&a[i][j]);
            b[i][j]=a[i][j];
        }
    }
    for(int i=0;i<r-1;++i){
        for(int j=0;j<c;++j){
            if(a[i][j]=='*')b[i+1][j]='*';
        }
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            printf("%c ",b[i][j]);
        }
        printf("\n");
    }
    return 0;
}