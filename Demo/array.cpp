#include<cstdio>
#include<cstring>
#include<malloc.h>
#include<process.h>
using namespace std;
int main() {
	char str[100];//栈内存 
	int size = 100;
	
	
	printf("str address = %d\n", str); 
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
	
	//free 不能释放栈内存 
	//	free(str);
	
	return 0;
}
