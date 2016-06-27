#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
int main() {
	int n;
	char *str=(char *)malloc(sizeof(char) * 200);
	scanf("%d",&n);
	while(n--) {
		scanf("%s",str);
		int num=0,i;
		for(i=0;i<strlen(str);i++) {
			if(isdigit(str[i]))
			num++;
		}
		printf("%d\n",num);
	}
}
