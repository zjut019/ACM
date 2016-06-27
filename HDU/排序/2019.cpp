#include<stdio.h>
#include<stdlib.h>
int main() {
	int *p=(int *)malloc(sizeof(int)*105);
	int n,m;
	while(scanf("%d %d", &n, &m),(n||m)) {
		int i;
		for(i=0;i<n;i++) 
		scanf("%d",&p[i]);
		for(i=n-1;i>=0;i--) {
			if(m>=p[i]) {
				break;
			} else 
				p[i+1]=p[i];
		}
		p[i+1]=m;
		printf("%d",p[0]);
		for(i=1;i<=n;i++)
		printf(" %d",p[i]);
		putchar('\n');
	}
}
