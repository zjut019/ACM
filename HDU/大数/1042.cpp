#include<iostream> 
#include<vector>
#include<iomanip>
#include<algorithm>
#include<stdio.h> 
using namespace std;
int main() {
//	freopen("1042.in","r",stdin);
//	freopen("1042.out","w",stdout);
	int n;
	while(cin>>n) {
		vector<int>v;
		int i,j,sz;
		v.push_back(1);
		for(i=2;i<=n;i++) {
			sz=v.size();
			int x=0;
			for(j=0;j<sz-1;j++) {
				v[j]=v[j]*i+x;
				if(v[j]>=10000) {
					x=v[j]/10000;
					v[j]%=10000;
				}
			}
			v[sz-1]=v[sz-1]*i+x;
			if(v[sz-1]>=10000) {
				v.push_back(v[sz-1]/10000);
				v[sz-1]%=10000;
			}
		}
		sz=v.size();
		cout<<v[sz-1];
		for(i=sz-2;i>=0;i--)
			cout<<setw(4)<<setfill('0')<<v[i];
		cout<<endl;
	}
}
