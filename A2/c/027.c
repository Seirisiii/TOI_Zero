#include<stdio.h>
#include<string.h>
#include<limits.h>
int n;
int res;
int mx=INT_MIN;
int main(){
    scanf("%d",&n);
    while(n--){
        int p;
        scanf("%d",&p);
        if(p>mx){
            mx=p;
            res=1;
        }
        else if(p==mx)++res;
    }
    printf("%d\n%d",mx,res);
    return 0;
}
