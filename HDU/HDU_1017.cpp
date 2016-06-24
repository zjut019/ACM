#include<stdio.h> 
#include<stdbool.h>
int main() {
	int N,n,m,a,b,count,num,k,sum,i;
	scanf("%d", &N);
	
	for(i=0;i<N;i++) {
		num=1;
		while(scanf("%d %d", &n, &m) == 2) {
			if(n==0&&m==0)
			break;
			count=0;
			for(a=1;a<n;a++) 
				for(b=a+1;b<n;b++) {
					sum=a*a+b*b+m;
					int yushu=sum%(a*b);
					if(yushu==0)
						count++;
				}
				printf("Case %d: %d\n",num++, count);
			
			}
			if(i != N-1)
				putchar('\n');
	}
}
