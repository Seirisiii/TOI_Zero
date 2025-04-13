#include<stdio.h>
#include<stdbool.h>
int n;
char arr[35][35];
bool visited[35][35];
int solve(int i,int j){
    if(i<1 || i>n || j<1 || j>n)return 0;
    if(arr[i][j]=='X')return 0;
    if(visited[i][j])return 0;
    visited[i][j]=true;
    return 1+solve(i-1,j)+solve(i,j-1);
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            scanf(" %c",&arr[i][j]);
        }
    }
    printf("%d",solve(n,n));
    return 0;
}