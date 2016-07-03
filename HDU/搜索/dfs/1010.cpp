#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<iostream>
using namespace std;
int n,m,T;
char maze[7][7];
int sx,sy,ex,ey;
int d[4][2]={{-1,0},{1,0},{0,-1},{0,1}};
int flag;
void dfs(int x, int y, int t) {
	if(flag) {
		return ;
	}
	int temp=T-t-abs(ex-x)-abs(ey-y);
	if(temp<0||temp&1)
	 	return;
	int i;
	for(i=0;i<4;i++) {
		int dx=x+d[i][0];
		int dy=y+d[i][1];
		if(dx>=0&&dx<n&&dy>=0&&dy<m&&t<T&&maze[dx][dy]!='X') {
			if(t+1==T&&maze[dx][dy]=='D') {
				flag=1;
				return;
			}
			maze[dx][dy]='X';
			dfs(dx,dy,t+1);
			maze[dx][dy]='.';
		}
	}
}
int main() {
	while(scanf("%d %d %d",&n,&m,&T), n||m||T) {
		flag=0;
		int wall=0;
		int i,j;
		for(i=0;i<n;i++) {
			for(j=0;j<m;j++) {
				cin>>maze[i][j];
				if(maze[i][j]=='S') 
					sx=i,sy=j,maze[i][j]='X';
				else if(maze[i][j]=='D')
					ex=i,ey=j;
				else if(maze[i][j]=='X')
					wall++;
				}
			}
		if(T<n*m-wall)
			dfs(sx,sy,0);
		if(flag) 
			puts("YES");
		else
			puts("NO");
	}
	
}
