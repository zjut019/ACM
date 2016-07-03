#include<iostream>
#include<string.h> 
#include<algorithm> 
using namespace std;
int v[4];
bool isExist[10000];
bool visit[4];
int cnt;
int per;
int digit;
void dfs(int k) {
	if(k==4) {
		if(isExist[per])
		return ;

		if(per/1000!=digit)
			putchar('\n'),digit=per/1000,cnt=0;
					cnt++;
		if(cnt!=1)
			putchar(' ');
		printf("%d",per);
		isExist[per]=true;
		return ;
	}
	int i;
	for(i=0;i<4;i++) {
		if(!visit[i]){
			if(k==0&&v[i]==0)
				continue;
			per=per*10+v[i],visit[i]=true,dfs(k+1),per/=10,visit[i]=false;
		}
	}
}
int main() {
	bool flag=false;
	while(true) {
		int i;
		for(i=0;i<4;i++)
			cin>>v[i];
		if((v[0]|v[1]|v[2]|v[3])==0)
		 	break;
		 	sort(v,v+4);
		 	if(flag)
		 	putchar('\n');
		 	else
		 	flag=true;
		 	memset(isExist,0,sizeof(isExist));
		cnt=0;
		per=0;
		digit=v[0];
		dfs(0);
		putchar('\n');
	}
}
