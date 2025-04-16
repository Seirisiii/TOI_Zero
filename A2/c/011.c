#include<stdio.h>
#include<stdbool.h>
int visited[10000005];
int main(){
    for(int i=0;i<10;++i){
        int x;
        scanf("%d",&x);
        if(!visited[x])printf("%d ",x);
        visited[x]=true;
    }
    return 0;
}