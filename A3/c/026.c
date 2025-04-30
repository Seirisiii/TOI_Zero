#include<stdio.h>
int r,c;
char a[1005][1005];
char b[1005][1005];
int main(){
    scanf("%d%d",&r,&c);
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            scanf(" %c",&a[i][j]);
        }
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            scanf(" %c",&b[i][j]);
        }
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if(a[i][j]=='-')printf("%c",b[i][j]);
            else{
                if(b[i][j]=='-')printf("%c",a[i][j]);
                else printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}