#include<stdio.h>
#include<stdlib.h>
int main() {
	long long int *o=(int*) malloc(sizeof(long long int)*41);
	long long int *ef=(int *)malloc(sizeof(long long int)*41);
	*(o+1)=1;*(ef+1)=2;
	int i;
	for(i=2;i<40;i++) {
		*(o+i)=*(ef+i-1);
		ef[i]=(o[i-1]+ef[i-1])*2;
	}
	long long int *n=(int*)malloc(sizeof(long long int));
	while(scanf("%d",n)==1) {
		printf("%lld\n",o[*n]+ef[*n]);
	}

}
