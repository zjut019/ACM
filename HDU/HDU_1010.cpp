#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
#include<queue>
using namespace std;
struct pos {
	int x;
	int y;
	int t;
};
int dr[4][2]={{-1,0},{1,0},{0,1},{0,-1}};
int main() {
	int N,M,T;
	int sx,sy;
	int dx,dy;
	char *maze[7];
	while(scanf("%d %d %d",&N,&M,&T)==3&&(N!=0||M!=0||T!=0)) {
		int i,j;
		for(i=0;i<N;i++) {
			maze[i]=(char *) malloc(sizeof(char)*(M+1));
			scanf("%s", maze[i]);
			for(j=0;j<M;j++) {
				if(maze[i][j]=='S')
					sx=i,sy=j;
				else if(maze[i][j]=='D')
					dx=i,dy=j;
			}
		}
		queue<struct pos> qu;
		struct pos p = {sx,sy,T};
		qu.push(p);
		maze[sx][sy]='X';
		while(!qu.empty()) {
			p=qu.front();
			int x=p.x;
			int y=p.y;
			int t=p.t;
			printf("%d %d %d\n",x,y,t);
			if(x==dx&&y==dy&&t==0) { 
				puts("YES");
				break;
			}
			qu.pop();
			for(i=0;i<4;i++) {
			  	int mx=x+dr[i][0];
			  	int my=y+dr[i][1];
			  	int mt=t-1;
			  	if(mx>=0&&mx<N&&my>=0&&my<M&&mt>=0&&maze[mx][my]!='X') {
			  		//TODO:ππ‘Ï
//			  		struct pos q={mx,my,mt}; 
					p.x=mx;
					p.y=my;
					p.t=mt; 
					maze[i][j]='X';
			  		qu.push(p);
			  }
		}
		}
		if(qu.empty())
		  puts("NO"); 
	}
}
