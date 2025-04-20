#include<stdio.h>
#include<stdbool.h>
typedef struct{
	int val;
	int idx;
}pair;
int n,k;
int visited[100005];
int cnt;
long long res;
pair q[100005];
int front=0,rear=0;
void push(int val,int idx){
	q[rear].val=val;
	q[rear].idx=idx;
	++rear;
    return ;
}
void pop(){
	++front;
    return ;
}
pair peek(){
	return q[front];
}
int main(){
	scanf("%d%d",&n,&k);
	int l=0;
	for(int i=0;i<n;++i){
		int c;
		scanf("%d",&c);
		if(visited[c]==0)++cnt;
		++visited[c];
		push(c,i);
		bool pass=false;
		int r=i;
		while(cnt>=k){
			pass=true;
			pair p=peek();
            pop();
			--visited[p.val];
			if(visited[p.val]==0)--cnt;
			r=p.idx;
		}
		if(r<l || !pass)continue;
		res+=(r-l+1)*(n-i);
		l=r+1;
	}
	printf("%lld",res);
	return 0;
}
