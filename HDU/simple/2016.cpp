#include<iostream> 
#include<stdlib.h>
using namespace std;
int main() {
	int n;
	int *p;
	while(cin>>n,n) {
		p=(int *)malloc(sizeof(int)*n);
		int i,min=0;
		for(i=0;i<n;i++) {
			cin>>p[i];
			if(p[i]<p[min])
				min=i;
		}
		int temp;
		temp=p[0];
		p[0]=p[min];
		p[min]=temp;
		cout<<p[0];
		for(i=1;i<n;i++)
			cout<<" "<<p[i];
		cout<<endl;
	}
}
