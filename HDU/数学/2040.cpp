#include<iostream>
#include<string.h>
using namespace std;
#define MAX 600001
int p[MAX];
int main() {
	int i,j;
	p[0]=0;
	for(i=1;i<MAX;i++)
		p[i]=1;
	for(i=2;i<(MAX>>1);i++) {
		int n=i;
		p[n]=1;
		while(n<MAX) {
			p[n]+=i;
			n+=i;
		} 
	}
	int n;
	cin>>n;
	while(n--) {
		int a,b;
		cin>>a>>b;
		if(p[a]==p[b])
			puts("YES");
		else puts("NO");
	}
}
