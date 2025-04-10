#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int n,k;
int res=INT_MAX;
int a[305];
int b[305];
int c[305];
int d[305];
int compare(const void *x,const void *y){
    return (*(int*)x-*(int*)y);
}
int main(){
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;++i)scanf("%d",&a[i]);
    for(int i=0;i<n;++i)scanf("%d",&b[i]);
    for(int i=0;i<n;++i)scanf("%d",&c[i]);
    for(int i=0;i<n;++i)scanf("%d",&d[i]);
    qsort(a,n,sizeof(int),compare);
    qsort(b,n,sizeof(int),compare);
    qsort(c,n,sizeof(int),compare);
    qsort(d,n,sizeof(int),compare);
    for(int i=0;i<=k;++i){
        if(i>n || k-i>n)continue;
        int mx=0;
        for(int j=0;j<i;++j)mx=(mx>a[j]+c[i-j-1])?mx:(a[j]+c[i-j-1]);
        for(int j=0;j<k-i;++j)mx=(mx>b[j]+d[k-i-j-1])?mx:(b[j]+d[k-i-j-1]);
        res=(res<mx)?res:mx;
    }
    printf("%d",res);
    return 0;
}