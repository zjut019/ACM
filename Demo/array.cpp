#include<cstdio>
#include<cstring>
#include<malloc.h>
#include<process.h>
using namespace std;
int main() {
	char str[100];//ջ�ڴ� 
	int size = 100;
	
	
	printf("str address = %d\n", str); 
	//sizeof(str)��32λ����������64λ�й� 
	printf("sizeof(str) = %d\n", sizeof(str));
	printf("strlen(str) = %d\n", strlen(str));
	
	printf("Strng is %s\n", str);
	
	//copy "hello" into string
	strcpy(str, "hello");
	
	printf("sizeof(str) = %d\n", sizeof(str));
	printf("strlen(str) = %d\n", strlen(str));
	
	//display string
	printf("Strng is %s\n", str);
	
	//free �����ͷ�ջ�ڴ� 
	//	free(str);
	
	return 0;
}
