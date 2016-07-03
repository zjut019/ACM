#include<stdio.h> 
__int64 res[36][36];
int main() {
	int i,j;
	for(i=1;i<36;i++)
		res[0][i]=res[i][0]=1;
	for(i=1;i<36;i++) 
		for(j=1;j<36;j++) 
			res[i][j]=res[i-1][j]+res[i][j-1];
		for(i=1;i<=10;i++)  {
			for(j=1;j<=10;j++) {
				printf("%I64d ",res[i][j]);
			}
			putchar('\n');
		}
			
	int n;
	i=0;
	while(scanf("%d",&n),n!=-1) {
		printf("%d %d %I64d\n",++i,n,res[n][n]);
	}
}
