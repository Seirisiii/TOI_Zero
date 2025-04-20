#include<stdio.h>
int n;
int a[305];
int b[305];
int res;
int main(){
	scanf("%d",&n);
	a[0]=1;
	b[0]=1;
	for(int i=1;i<=n;++i){
        scanf("%d",&a[i]);
    }
	for(int i=1;i<=n;++i){
        scanf("%d",&b[i]);
    }
	for(int i=1;i<=n;++i){
		int ua=a[i-1]<a[i]?a[i-1]:a[i];
		int va=a[i-1]>a[i]?a[i-1]:a[i];
		int ub=b[i-1]<b[i]?b[i-1]:b[i];
		int vb=b[i-1]>b[i]?b[i-1]:b[i];
		if(ua==ub && va==vb)++res;
		else if((ua<ub && va<vb && va>ub) || (ua>ub && va>vb && vb>ua))++res;
	}
	printf("%d",res);
	return 0;
}
