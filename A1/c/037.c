#include<stdio.h>
#include<string.h>
int n;
char *M[4]={"","M","MM","MMM"};
char *C[10]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
char *X[10]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
char *I[10]={"","I","II","III","IV","V","VI","VII","VIII","IX"};
int main(){
    scanf("%d",&n);
    printf("%s%s%s%s",M[n/1000],C[(n%1000)/100],X[(n%100)/10],I[(n%10)]);
    return 0;
}