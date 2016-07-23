#include<stdio.h>
int sum(int n) {
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	return n+sum(n-1);
}
int main() {
	int n;
	while(scanf("%d",&n)==1) {
		printf("%d\n\n",sum(n));
	}
}
