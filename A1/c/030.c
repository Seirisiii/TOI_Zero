#include<stdio.h>
int n;
int res;
int main(){
    scanf("%d",&n);
    if(n==1){
        int a,b;
        scanf("%d%d",&a,&b);
        if(a>b)printf("%d",a);
        else printf("%d",b);
    }
    else{
        for(int i=0;i<n;++i){
            int a,b;
            scanf("%d%d",&a,&b);
            if(a>b){
                printf("%d",a);
                if(i<n-1)printf(" + ");
                res+=a;
            }
            else{
                printf("%d",b);
                if(i<n-1)printf(" + ");
                res+=b;
            }
        }
        printf(" = %d",res);
    }
    return 0;
}