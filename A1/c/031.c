#include<stdio.h>
#include<string.h>
char s[10];
int main(){
    scanf(" %s",s);
    int sz=strlen(s);
    if(sz==6){
        for(int i=0;i<3;++i){
            printf("%c",s[i]);
        }
        printf(",");
        for(int i=3;i<6;++i){
            printf("%c",s[i]);
        }
    }
    else if(sz==5){
        for(int i=0;i<2;++i){
            printf("%c",s[i]);
        }
        printf(",");
        for(int i=2;i<5;++i){
            printf("%c",s[i]);
        }
    }
    else if(sz==4){
        printf("%c,",s[0]);
        for(int i=1;i<4;++i){
            printf("%c",s[i]);
        }
    }
    return 0;
}