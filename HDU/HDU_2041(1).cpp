#include<stdio.h>
int main() {
	int i,n;
	int res[43];
	res[1]=res[2]=1;
	for(i=3;i<=40;i++) {
		res[i]=res[i-1]+res[i-2];
	}
	scanf("%d",&n);
	while(n--) {
		int m;
		scanf("%d",&m);
		printf("%d\n",res[m]);
	}
}
