#include<stdio.h>
#include<string.h>
typedef enum
{
 FALSE,
 TRUE
} boolean;
int n,i,m,cnt;
int per[1005];
boolean visit[1005];
void dfs(int k) {
	if(k==n) {
		cnt++;
		if(cnt==m){
			printf("%d",per[0]);
			for(i=1;i<n;i++)
			printf(" %d",per[i]);
			putchar('\n');
		}
		return ;
	}
	if(cnt>m)
	return ;
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
	
	while(scanf("%d %d",&n,&m)!=EOF) {
		memset(visit,0,sizeof(visit));
		cnt=0;
		dfs(0);
	}
}
