#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<queue>
#include<iostream>
using namespace std;
struct node {
	int x;
	int y;
	int v;
};
int d[8][2]={{-2,-1},{-1,-2},{1,-2},{2,-1},{-2,1},{-1,2},{1,2},{2,1}};

int main() {
	int sx,sy,ex,ey;
	char c,r,i;
	char visit[8][8];
	while(cin>>c>>r) {
		memset(visit,0,sizeof(visit));
		sx=r-'1';
		sy=c-'a';
		visit[sx][sy]=1;
		queue<struct node>qu;
		struct node nd={sx,sy,0};
		qu.push(nd);
		cin>>c>>r;
		ex=r-'1';
		ey=c-'a';
		while(!qu.empty()) {
			nd=qu.front();
			qu.pop();
			if(nd.x==ex&&nd.y==ey) {
				printf("To get from %c%c to %c%c takes %d knight moves.\n",sy+'a',sx+'1',ey+'a',ex+'1',nd.v);
				break;
			}
			int x=nd.x,y=nd.y,v=nd.v;
			for(i=0;i<8;i++) {
				int dx=x+d[i][0];
				int dy=y+d[i][1];
				if(dx>=0&&dx<8&&dy>=0&&dy<8&&!visit[dx][dy]) {
					visit[dx][dy]=1;
//					struct node nd={dx,dy,v+1};
					nd.x=dx;
					nd.y=dy;
					nd.v=v+1;
					qu.push(nd);
				}
			}
		}
	}
}
