#include<iostream> 
#include<math.h>
using namespace std;
int main() {
	double n;
	while(cin>>n)  {
		int a=sqrt(2*n);
		int res=(a+1)%9+1;
		cout<<res<<endl; 
	}
}
