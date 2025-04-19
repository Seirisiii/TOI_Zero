#include<stdio.h>
int n;
int h[1001];
int sum;
int mx;
int main(){
    scanf("%d",&n);
    h[1]=1;
    for(int i=1;i<=n;++i){
        int a,l,b,r;
        scanf("%d%d%d%d",&a,&l,&b,&r);
        if(a==0)h[l]=h[i]+1;
        else{
            sum+=l;
            mx=mx<l*(1<<h[i])?l*(1<<h[i]):mx;
        }
        if(b==0)h[r]=h[i]+1;
        else{
            sum+=r;
            mx=mx<r*(1<<h[i])?r*(1<<h[i]):mx;
        }
    }
    printf("%d",mx-sum);
    return 0;
}
