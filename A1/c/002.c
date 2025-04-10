#include<stdio.h>
#include<stdlib.h>
int n;
int main(){
    scanf("%d",&n);
    printf("10 = %d\n",n/10);
    printf("5 = %d\n",n%10/5);
    printf("2 = %d\n",n%10%5/2);
    printf("1 = %d",n%10%5%2);
    return 0;
}