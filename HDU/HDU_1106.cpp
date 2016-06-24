#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
	char *str = (char *) malloc(sizeof(char)*1005);
	char separator[] = "5";
	char *p;
	int i;
	vector<int> vec;
	while(scanf("%s", str) == 1) {
		p=strtok(str, separator);
		while(p!=NULL) {
			vec.push_back(atoi(p));
			p=strtok(NULL, separator);
		}
		sort(vec.begin(), vec.end());
		printf("%d", vec[0]);
		for(i=1;i<vec.size();i++) 
			printf(" %d", vec[i]);
			vec.clear();
		putchar('\n');
	}
}
