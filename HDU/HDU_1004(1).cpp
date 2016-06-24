#include<iostream>
#include<map>
#include<string>
#include<stdio.h>
using namespace std;
int main() {
	int n,i; 
	string color;
	int max;
	string res; 
	while(scanf("%d", &n) == 1 && n!=0) {
		max=0;
		map<string, int> map;
		for(i=0;i<n;i++) {
			cin>>color;
			map[color]++;
			if(map[color] > max) {
				max = map[color];
				res = color;
			}
		}
		cout<<res<<endl;
	}
}
