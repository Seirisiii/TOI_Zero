#include<stdio.h>
int r,c;
int a,b;
int n;
int arr[1000][1000];
int dx1[8]={-1,-1,-1,0,1,1,1,0};
int dy1[8]={-1,0,1,1,1,0,-1,-1};
int dx2[16]={-2,-2,-2,-2,-2,-1,0,1,2,2,2,2,2,1,0,-1};
int dy2[16]={-2,-1,0,1,2,2,2,2,2,1,0,-1,-2,-2,-2,-2};
int cnt;
int main(){
    scanf("%d%d%d%d%d",&r,&c,&a,&b,&n);
    while(n--){
        int x,y;
        scanf("%d%d",&x,&y);
        arr[x][y]=100;
        for(int i=0;i<8;++i){
            int nx=x+dx1[i];
            int ny=y+dy1[i];
            if(nx<0 || nx>=r || ny<0 || ny>=c)continue;
            arr[nx][ny]=arr[nx][ny]>60?arr[nx][ny]:60;
        }
        for(int i=0;i<16;++i){
            int nx=x+dx2[i];
            int ny=y+dy2[i];
            if(nx<0 || nx>=r || ny<0 || ny>=c)continue;
            arr[nx][ny]=arr[nx][ny]>20?arr[nx][ny]:20;
        }
    }
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if(arr[i][j]==0)++cnt;
        }
    }
    printf("%d\n%d%%",cnt,arr[a][b]);
    return 0;
}