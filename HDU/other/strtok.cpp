#include<stdio.h>
#include<string.h>
int main() {
	char input[] = "123556785AB5E5F";
	char *p;
	p = strtok(input, "5");
	while(p != NULL){
		printf("%s\n",p);
		p = strtok(NULL, "5");
	}
}
