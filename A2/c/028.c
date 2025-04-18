#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int n;
char s1[1005];
char s2[1005];
int no;
bool check;
int main(){
    scanf("%d%s%s",&n,s1,s2);
    for(int i=0;i<n;++i){
        int num=s1[i]-'0'+s2[i]-'0';
        if(num!=9){
            check=true;
            ++no;
        }
    }
    if(!check)printf("YES");
    else printf("NO %d",no);
    return 0;
}
