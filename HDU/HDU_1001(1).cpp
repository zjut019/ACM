#include<stdio.h> 
int main() {
	int n;
	while(scanf("%d", &n) == 1) {
		if((n&1)==0) {
			printf("%d\n",(n>>1)*(n+1));
		}
		else {
			printf("%d\n",((n+1)>>1)*n);
		}
			putchar('\n');
	}
}
