#include<string.h>
#include<stdio.h>
int main() {
	char end[] = "ENDOFINPUT";
	char key[] = "VWXYZABCDEFGHIJKLMNOPQRSTU";
	char cipherText[250];
	while(gets(cipherText) && strcmp(end, cipherText) != 0) {
		gets(cipherText);
		int len = strlen(cipherText);
		for(int i=0;i<len;i++) {
			if(cipherText[i] >= 'A' && cipherText[i] <= 'Z')
			  putchar(key[cipherText[i] - 'A']);
			else
			putchar(cipherText[i]);
		}
		putchar('\n');
		gets(cipherText);
	}
}
