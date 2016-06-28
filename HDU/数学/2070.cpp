#include<stdio.h>
int main() {
	__int64 fib[51];
	fib[0]=0;
	fib[1]=1;
	int n,i;
	for(i=2;i<=50;i++) {
		fib[i]=fib[i-1]+fib[i-2];
	}
	while(scanf("%d",&n), n!=-1) {
		printf("%I64d\n",fib[n]);
	}
}
