#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
	char *str = (char *)malloc(sizeof(char)*100);
	while(scanf("%s", str) == 1) {
		int max=0;
		int i;
		char mChr='A';
		for(i=0;i<strlen(str);i++) {
			if(str[i]>mChr)
				mChr=str[i];
		}
		for(i=0;i<strlen(str);i++) {
			putchar(str[i]);
			if(str[i]==mChr)
			printf("%s", "(max)");
		}
		putchar('\n');
	}
}
