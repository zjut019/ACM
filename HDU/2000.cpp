#include<stdio.h>
#include<stdlib.h>
#include<iostream> 
#include<algorithm>
using namespace std;
int main() {
	char *str=(char *)malloc(sizeof(char)*4);
	while(scanf("%s",str)!=EOF) {
		sort(str,str+3);
		printf("%c %c %c\n", str[0],str[1],str[2]);
	}
}

