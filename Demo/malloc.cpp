#include<cstdio>
#include<cstring>
#include<malloc.h>
#include<process.h>
using namespace std;
int main() {
	char *str;
	int size = 100;
	
	//野指针地址 
	printf("address str = %d\n", str);
	//allocate memory for string
	if((str = (char *) malloc(size)) == NULL) {
		printf("Not enough memory to allocate buffer\n");
		exit(1);
	}
	
	//分配内存之后地址 
	printf("address str = %d\n", str);
	
	//sizeof(str)跟32位编译器还是64位有关 
	printf("sizeof(str) = %d\n", sizeof(str));
	printf("strlen(str) = %d\n", strlen(str));
	
	printf("Strng is %s\n", str);
	
	//copy "hello" into string
	strcpy(str, "hello");
	
	printf("sizeof(str) = %d\n", sizeof(str));
	printf("strlen(str) = %d\n", strlen(str));
	
	//display string
	printf("Strng is %s\n", str);
	
	//free memory
	free(str);
	
	printf("释放内存之后 address str = %d\n", str);
	
	printf("sizeof(str) = %d\n", sizeof(str));
	printf("strlen(str) = %d\n", strlen(str));
	
	//display string
	printf("Strng is %s\n", str);
	
	return 0;
}
