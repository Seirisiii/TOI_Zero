#include<stdio.h>
#include<stdbool.h>
int res;
int main(){
    while(true){
        int x;
        scanf("%d",&x);
        if(x==5)break;
        else if(x==1)res+=100;
        else if(x==2)res+=120;
        else if(x==3)res+=200;
        else if(x==4)res+=60;
    }
    printf("Bye Bye\nTotal Calories: %d",res);
    return 0;
}