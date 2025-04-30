#include<stdio.h>
int r,c;
int n;
int arr[1005][1005];
int di[8]={-1,-1,-1,0,1,1,1,0};
int dj[8]={-1,0,1,1,1,0,-1,-1};
int main(){
    scanf("%d%d",&r,&c);
    scanf("%d",&n);
    while(n--){
        int i,j;
        scanf("%d%d",&i,&j);
        arr[i][j]=-1;
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if(arr[i][j]==-1)printf("x ");
            else{
                int res=0;
                for(int k=0;k<8;++k){
                    int ni=i+di[k];
                    int nj=j+dj[k];
                    if(ni<0 || ni>=r || nj<0 || nj>=c)continue;
                    if(arr[ni][nj]==-1)++res;
                }
                printf("%d ",res);
            }
        }
        printf("\n");
    }
    return 0;
}