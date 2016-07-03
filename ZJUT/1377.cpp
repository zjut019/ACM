#include<stdio.h>
#include<string.h>
typedef enum
{
 FALSE,
 TRUE
} boolean;
int n,i;
int per[7];
boolean visit[8];
void dfs(int k) {
	if(k==n) {
		printf("%d",per[0]);
		for(i=1;i<n;i++)
		printf(" %d",per[i]);
		putchar('\n');
		return ;
	}
	int j;
	for(j=1;j<=n;j++) {
		if(!visit[j]) {
			per[k]=j;
			visit[j]=TRUE;
			dfs(k+1);
			visit[j]=FALSE;
		}
	}
}
int main() {
	
	while(scanf("%d",&n)!=EOF) {
		memset(visit,0,sizeof(visit));
		dfs(0);
	}
}
