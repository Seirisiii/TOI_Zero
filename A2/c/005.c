#include<stdio.h>
int w,h,m,n;
int x[1005];
int y[1005];
int cx[1005];
int cy[1005];
int res[4];
int compare(const void* a,const void* b){
    return (*(int*)a-*(int*)b);
}
int main(){
    scanf("%d%d%d%d",&w,&h,&m,&n);
    for(int i=1;i<=m;++i){
        scanf("%d",&x[i]);
    }
    x[m+1]=w;
    for(int i=1;i<=n;++i){
        scanf("%d",&y[i]);
    }
    y[n+1]=h;
    for(int i=0;i<=m;++i){
        cx[i]=x[i+1]-x[i];
    }
    for(int i=0;i<=n;++i){
        cy[i]=y[i+1]-y[i];
    }
    qsort(cx,m+1,sizeof(int),compare);
    qsort(cy,n+1,sizeof(int),compare);
    printf("%d %d",cx[m]*cy[n],cx[m-1]*cy[n]>cy[n-1]*cx[m]?cx[m-1]*cy[n]:cy[n-1]*cx[m]);
    return 0;
}