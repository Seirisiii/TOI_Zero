#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int n;
int res;
int main(){
    scanf("%d",&n);
    int sq=sqrt(n);
    if(sq*sq==n)--sq;
    if(sq%2==0){
        if(n%2==0)res=sq*2-1;
        else res=sq*2;
    }
    else{
        if(n%2==0)res=sq*2;
        else res=sq*2-1;
    }
    printf("%d",res);
    return 0;
}