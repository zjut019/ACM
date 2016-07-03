#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main() {
	int C;
	scanf("%d",&C);
	while(C--) {
		int n;
		scanf("%d",&n);
		int i,j;
		int *tower[n];
		for(i=0;i<n;i++) {
			tower[i]=(int *)malloc(sizeof(int)*(i+1));
			for(j=0;j<=i;j++) {
				scanf("%d", *(tower+i)+j);
			}
		}
		
		for(i=1;i<n;i++) {
			tower[i][0]+=tower[i-1][0];
			tower[i][i]+=tower[i-1][i-1];
			for(j=1;j<i;j++) {
				tower[i][j]+=max(tower[i-1][j-1],tower[i-1][j]);
			}
		}
		int max=0;
		for(i=0;i<n;i++) {
			if(tower[n-1][i]>max)
				max=tower[n-1][i];
		}
		printf("%d\n",max);
	}
}
