#include<stdio.h>
int res[43];
int total(int m) {
	if(m==1)
	return res[1];
	if(m==2)
	return res[2];
	if(res[m-1]==0)
	res[m-1]=total(m-1);
	if(res[m-2]==0)
	res[m-2]=total(m-2);
	return res[m-1]+res[m-2];
}
int main() {
	int n;
	res[1]=res[2]=1;
	scanf("%d",&n);
	while(n--) {
		int m;
		scanf("%d",&m);
		printf("%d\n",total(m));
	}
}
