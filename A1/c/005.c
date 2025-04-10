#include<stdio.h>
int m,d;
int main(){
    scanf("%d%d",&m,&d);
    if(m==1 || m==2)printf("winter");
    else if(m==3){
        if(d>=21)printf("spring");
        else printf("winter");
    }
    else if(m==4 || m==5)printf("spring");
    else if(m==6){
        if(d>=21)printf("summer");
        else printf("spring");
    }
    else if(m==7 || m==8)printf("summer");
    else if(m==9){
        if(d>=21)printf("fall");
        else printf("summer");
    }
    else if(m==10 || m==11)printf("fall");
    else if(m==12){
        if(d>=21)printf("winter");
        else printf("fall");
    }
    return 0;
}