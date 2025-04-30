#include<stdio.h>
int r,c;
int n;
int arr[1005][1005];
int di[8]={-1,-1,-1,0,1,1,1,0};
int dj[8]={-1,0,1,1,1,0,-1,-1};
int mx;
int main(){
    scanf("%d%d",&r,&c);
    scanf("%d",&n);
    while(n--){
        int i,j;
        scanf("%d %d",&i,&j);
        ++arr[i][j];
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if(arr[i][j]>0)continue;
            int sum=0;
            for(int k=0;k<8;++k){
                int ni=i+di[k];
                int nj=j+dj[k];
                if(ni<0 || ni>=r || nj<0 || nj>=c)continue;
                sum+=arr[ni][nj];
            }
            mx=mx<sum?sum:mx;
        }
    }
    printf("%d",mx);
    return 0;
}