#include<iostream> 
#include<math.h>
using namespace std;
bool judge(int v) {
	int i;
	for(i=2;i<=sqrt(v);i++) {
		if(v%i==0)
			return false;
	}
	return true;
}
int main() {
	int x,y;
	while(cin>>x>>y,x|y) {
	 	int i;
	 	bool flag=true;
		for(i=x;i<=y;i++) {
			if(!judge(i*i+i+41)) {
				flag=false;
				break;
			}
		}
		if(flag)
			puts("OK");
		else puts("Sorry");
	}
}
