#include<stdio.h>
#include<stdlib.h>
int main() {
	int *p=(int *)malloc(sizeof(int)*105);
	int n,m;
	while(scanf("%d %d", &n, &m),(n||m)) {
		int i;
		for(i=0;i<n;i++) 
		scanf("%d",&p[i]);
		int flag=0;
		for(i=0;i<n;i++) {
			if(i!=0)
			putchar(' ');
			if(flag)
			printf("%d",p[i]);
			else {
				if(m<p[i]) {
					printf("%d %d",m,p[i]);
					flag=1;
				}else
				printf("%d",p[i]);
			}
		}
		putchar('\n');
	}
}
