#include<stdio.h>
int n,m;
int a[505];
int b[505];
int res;
int main(){
    scanf("%d%d",&n,&m);
    for (int i=1;i<=n;++i){
        scanf("%d",&a[i]);
    }
    for (int i=1;i<=m;++i){
        scanf("%d",&b[i]);
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(i%2==j%2){
                if((a[i]<b[j] && b[j+1]<a[i+1]) || (b[j]<a[i] && a[i+1]<b[j+1]))++res;
            }
            else{
                if((a[i]<b[j+1] && b[j]<a[i+1]) || (b[j]<a[i+1] && a[i]<b[j+1]))++res;
            }
        }
    }
    for(int i=0;i<=n;++i) {
        for(int j=i%2;j<=m;j+=2){
            if(a[i]==b[j])++res;
        }
    }
    printf("%d",res);
    return 0;
}