#include<iostream> 
#include<stdio.h>
#include<string>
#include<algorithm>
#include<map>
using namespace std;
int main() {
	int n,i,v;
	cin>>n;
	map<char,int>mp_ch_to_i;
	map<int,char>mp_i_to_ch;
	for(i=0;i<=9;i++)
		mp_ch_to_i(i+'0',i),mp_i_to_ch(i,i+'0');
	v=10;
	for(i='A';i<='Z';i++,v++)
		mp_ch_to_i(i,v),mp_i_to_ch(v,i);
	for(i='a';i<='z';i++,v++)
		mp_ch_to_i(i,v),mp_i_to_ch(v,i);
	while(n--) {
		int b1,b2;
		string s;
		cin>>b1>>b2>>s;
		cout<<b1<<" "<<s<<endl;
		cout<<b2<<" ";
		if(s=="0") {
			cout<<s<<endl<<endl;
			continue;
		}
		string res; 
		int temp=0;
		for(i=0;s[i]!='\0';i++) {
			temp=temp*b1+mp_ch_to_i(s[i]);
		}
	}
}
