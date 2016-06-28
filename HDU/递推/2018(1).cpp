#include<stdio.h>
int main() {
	int i,y;
	int cow[60];
	cow[1]=1;
	cow[2]=2;
	cow[3]=3;
	cow[4]=4;
	for(i=5;i<=55;i++) {
		cow[i]=cow[i-3]+cow[i-1];
	}
	while(scanf("%d",&y), y) {
		printf("%d\n",cow[y]);
	}
}
