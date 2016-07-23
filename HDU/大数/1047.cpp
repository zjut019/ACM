#include<stdio.h> 
#include<string.h>
#include<string>
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	short res[105],i;
	
	string s;
	bool flag=false;
	while(n--) {
		memset(res,0,sizeof(res));
		while(cin>>s,s!="0") {
			int len=s.length();
			for(i=len-1;i>=0;i--)
				res[len-i-1]+=s[i]-'0';
		}
		if(flag)
			puts("");
		else flag=true;
		for(i=0;i<104;i++) {
			res[i+1]+=res[i]/10,res[i]%=10;
		}
		i=104;
		while(res[i]==0)i--;
		if(i<0)
			putchar('0');
		for(;i>=0;i--)
			printf("%d",res[i]);
		puts("");
	}
}
