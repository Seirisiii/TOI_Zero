#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
int n,w,l;
int res[100005];
int main(){
    scanf("%d%d%d",&n,&w,&l);
    for(int i=0;i<n;++i){
        int k;
        scanf("%d",&k);
        bool visited[100005]={};
        for(int j=0;j<k;++j){
            int x;
            scanf("%d",&x);
            int s=(x-l>1)?(x-l):1;
            int e=(x+l<w)?(x+l):w;
            for(int a=s;a<=e;++a){
                if(visited[a])continue;
                visited[a]=true;
                ++res[a];
            }
        }
    }
    for(int i=1;i<=w;++i){
        if(res[i]==n){
            printf("1");
            return 0;
        }
    }
    printf("0");
    return 0;
}