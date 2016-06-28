#include<stdio.h>
int cow(int y) {
	if(y==1)
	return 1;
	if(y==2)
	return 2;
	if(y==3)
	return 3;
	if(y==4)
	return 4;
	return cow(y-3)+cow(y-1);
}
int main() {
	int n;
	while(scanf("%d",&n),n) {
		printf("%d\n",cow(n));
	}
}
