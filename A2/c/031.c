#include<stdio.h>
#include<stdlib.h>
int l;
int n;
int res;
char dna[2][1000005];
int main(){
    scanf("%d",&l);
    for(int i=0;i<l;++i){
        scanf(" %c",&dna[0][i]);
    }
    for(int i=0;i<l;++i){
        scanf(" %c",&dna[1][i]);
    }
    scanf("%d",&n);
    while(n--){
        int a,b;
        char c;
        scanf("%d %d %c",&a,&b,&c);
        dna[a-1][b]=c;
    }
    for(int i=0;i<l;++i){
        if(dna[0][i]=='A' && dna[1][i]=='T')++res;
        else if(dna[0][i]=='T' && dna[1][i]=='A')++res;
        else if(dna[0][i]=='G' && dna[1][i]=='C')++res;
        else if(dna[0][i]=='C' && dna[1][i]=='G')++res;
    }
    for(int i=0;i<l;++i){
        printf("%c ",dna[0][i]);
    }
    printf("\n");
    for(int i=0;i<l;++i){
        printf("%c ",dna[1][i]);
    }
    printf("\n");
    printf("%d",l-res);
    return 0;
}