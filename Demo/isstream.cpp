#include<iostream> 
#include<string>
#include<sstream>
using namespace std;
int main() {
	string str = "c3.14 5 abc";
	istringstream isin(str);
	char c;
	float f;
	int k;
	string s;
	isin>>c;
	isin>>f;
	isin>>k;
	isin>>s;
	cout<<c<<" "<<f<<" "<<k<<" "<<s<<endl;
}
