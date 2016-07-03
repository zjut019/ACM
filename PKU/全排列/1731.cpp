#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main() {
	char *str=(char *)malloc(sizeof(char)*205);
	while(scanf("%s",str)!=EOF) {
		sort(str, str+strlen(str));
		puts(str);
		while(next_permutation(str,str+strlen(str))) {
			puts(str);
		}
	}
}
