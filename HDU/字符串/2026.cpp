#include<stdio.h>
#include<string.h> 
//TODO:Ã¶¾Ùbool 
int main() {
	char c;
	int flag=1; 
	int diff = 'A' - 'a';
	while((c=getchar())!=EOF) {
		if(flag) {
			putchar(c+diff);
			flag=0;
		} else
		putchar(c);
		if(c==' '||c=='\n') {
			flag=1;
		}
	}
}
