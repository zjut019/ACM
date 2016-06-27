#include<stdio.h>
#include<stdlib.h>
int main() {
	int i,j;
	int *p[31];
	p[1]=(int *)malloc(sizeof(int));
	p[1][0]=1;
	p[2]=(int *)malloc(sizeof(int)*2);
	p[2][0]=p[2][1]=1;
	for(i=3;i<=30;i++) {
		p[i]=(int *)malloc(sizeof(int)*i);
		p[i][0]=p[i][i-1]=1;
		for(j=1;j<=i-2;j++) 
		p[i][j]=p[i-1] [j-1]+p[i-1][j];
	}
	int n;
	while(scanf("%d",&n)==1) {
		for(i=1;i<=n;i++) {
			for(j=0;j<i;j++) {
					if(j!=0)
					putchar(' ');
					printf("%d",p[i][j]);
				}
				putchar('\n');
			}
				putchar('\n');
	}
} 
