#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<queue>
using namespace std;
struct node {
	int x;
	int y;
};
int dir[8][2]={{-1,0},{1,0},{0,-1},{0,1},{-1,-1},{1,-1},{-1,1},{1,1}};
int main() {
	int n,m;
	char *land[100];
	while(scanf("%d %d", &m, &n),(n||m)) {
		int i,j,k;
		for(i=0;i<m;i++) {
			land[i]=(char *)malloc(sizeof(char)*n);
			scanf("%s",land[i]);
		}
		int deposit=0;
		for(i=0;i<m;i++)	  	 
			for(j=0;j<n;j++) {
				if(land[i][j]=='@') {
					deposit++;
					land[i][j]='*';
					struct node nd={i,j};
					queue<struct node>qu;
					qu.push(nd);
					while(!qu.empty()) {
						nd=qu.front();
						qu.pop();
						int x=nd.x;
						int y=nd.y;
						printf("%d %d\n",x,y);
						for(k=0;k<8;k++) {
							int mx=x+dir[k][0];
							int my=y+dir[k][1];
							printf("%d %d %d %d\n",mx,my,m,n);
							if(mx>=0&&mx<m&&my>=0&&my<n&&land[mx][my]=='@') {
//								printf("%d %d\n",mx,my);
								land[my][my]='*';
								struct node tnd={mx,my}; 
								qu.push(tnd);
							}
						}
					}
				}
			}
		printf("%d\n",deposit);
	}
}
