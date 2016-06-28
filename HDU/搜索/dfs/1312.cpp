#include<iostream>
using namespace std;
#include<stdio.h>
char tile[21][21];
int w,h,sx,sy;
int total;
int d[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
int dfs(int x,int y) {
	int k;
	for(k=0;k<4;k++) {
		int	dx=x+d[k][0];
		int dy=y+d[k][1];
		if(dx>=0&&dx<h&&dy>=0&&dy<w&&tile[dx][dy]=='.') {
			total++;
			tile[dx][dy]='#';
			dfs(dx,dy);
		}
	}
}
int main() {
	int i,j;
	while(scanf("%d %d",&w,&h), w||h) {
		for(i=0;i<h;i++)
			for(j=0;j<w;j++) {
				cin>>tile[i][j];
				if(tile[i][j]=='@')
				sx=i,sy=j,total=1;
			}
			dfs(sx,sy);
			printf("%d\n",total);
	}
}
