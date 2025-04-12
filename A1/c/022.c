#include<stdio.h>
int d,m;
int main(){
    scanf("%d%d",&d,&m);
    if(m==1){
        if(d<=19)printf("capricorn");
        else printf("aquarius");
    }
    else if(m==2){
        if(d<=18)printf("aquarius");
        else printf("pisces");
    }
    else if(m==3){
        if(d<=20)printf("pisces");
        else printf("aries");
    }
    else if(m==4){
        if(d<=19)printf("aries");
        else printf("taurus");
    }
    else if(m==5){
        if(d<=20)printf("taurus");
        else printf("gemini");
    }
    else if(m==6){
        if(d<=21)printf("gemini");
        else printf("cancer");
    }
    else if(m==7){
        if(d<=22)printf("cancer");
        else printf("leo");
    }
    else if(m==8){
        if(d<=22)printf("leo");
        else printf("virgo");
    }
    else if(m==9){
        if(d<=22)printf("virgo");
        else printf("libra");
    }
    else if(m==10){
        if(d<=23)printf("libra");
        else printf("scorpio");
    }
    else if(m==11){
        if(d<=21)printf("scorpio");
        else printf("sagittarius");
    }
    else if(m==12){
        if(d<=21)printf("sagittarius");
        else printf("capricorn");
    }
    return 0;
}