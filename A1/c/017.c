#include<stdio.h>
int y1,m1,d1,y2,m2,d2;
int main(){
    scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
    if(y1<y2)printf("1");
    else if(y1>y2)printf("2");
    else{
        if(m1<m2)printf("1");
        else if(m1>m2)printf("2");
        else{
            if(d1<d2)printf("1");
            else if(d1>d2)printf("2");
            else printf("0");
        }
    }
    return 0;
}