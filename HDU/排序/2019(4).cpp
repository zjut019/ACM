#include<stdio.h>
int main() {
	int n,m;
	while(scanf("%d %d",&n,&m), n||m) {
		int x,i,flag=0;
		for(i=0;i<n;i++) {
			scanf("%d",&x);
			if(i!=0)
			putchar(' ');
			if(flag)
			printf("%d",x);
			else {
				if(m<=x) {
				printf("%d %d",m,x);
				flag=1;
			}else
				printf("%d",x);
			}
		
		}
		putchar('\n');
	}
}
