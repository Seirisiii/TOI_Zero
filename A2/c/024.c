#include<stdio.h>
int l,p;
int r,m,f;
int pr,pm,pf;
int mx;
int main(){
    scanf("%d%d%d%d%d",&l,&p,&r,&m,&f);
    while(p--){
        int x,y;
        scanf("%d%d",&x,&y);
        if(x%r==0)pr+=y;
        if(x%m==0)pm+=y;
        if(x%f==0)pf+=y;
        mx=pr>mx?pr:mx;
        mx=pm>mx?pm:mx;
        mx=pf>mx?pf:mx;
    }
    if(pr==mx)printf("Rabbit %d\n",pr);
    if(pm==mx)printf("Monkey %d\n",pm);
    if(pf==mx)printf("Frog %d\n",pf);
    return 0;
}