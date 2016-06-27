#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;
int cmp(const int a, const int b) {
	return abs(a)>abs(b);
}
int main() {
	int *p;
	int n;
	while(scanf("%d",&n),n) {
		p=(int *)malloc(sizeof(int)*n);
		int i;
		for(i=0;i<n;i++) 
			scanf("%d",p+i);
		sort(p,p+n,cmp);
		for(i=0;i<n;i++) {
			if(i!=0)
			putchar(' ');
			printf("%d",p[i]);
			if(i==n-1)
			putchar('\n');
		}
	}
}
