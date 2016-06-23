#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void printArray(int b[], int len) {
	printf("address b : %d\n", b);
	//b这里相当于是一个指针变量了 
	printf("指针变量 sizef(b) : %d\n", sizeof(b));
	printf("len : %d\n", len);
	for(int i=0;i<len;i++) {
		printf("%d ", b[i]);
	}
	putchar('\n');
}
void printArray(long long int b[], int len) {
	printf("address b : %d\n", b);
	//b这里相当于是一个指针变量了 
	printf("指针变量 sizef(b) : %d\n", sizeof(b));
	printf("len : %d\n", len);
	for(int i=0;i<len;i++) {
		printf("%lld ", b[i]);
	}
	putchar('\n');
}
int main() {
	char stra[] = {'1', '2', '3', '\0', '\0', '\0'};
	printf("sizeof(stra) = %d\n", sizeof(stra));
	printf("strlen(stra) = %d\n", strlen(stra));
	char buffer[] = "Hello world\n";
	printf("Buffer before memset sizeof(buffer): %d\n", sizeof(buffer));
	printf("Buffer before memset: %s\n", buffer);
	printf("Buffer length: %d\n", strlen(buffer));
	memset(buffer, '*', strlen(buffer));
	printf("Buffer after memset: %s\n", buffer); 
	printf("Buffer after memset length: %d\n", strlen(buffer));
	printf("Buffer after memset sizeof(buffer): %d\n", sizeof(buffer));
	
	int a[10] = {6};
	long long int b[10] = {5};
	printf("address a : %d\n", a);
	//按照字节赋值
	//0x01010101 = 16843009 
//	memset(a, 1, sizeof(a));
	//0x02020202 = 33686018
	printf("0x04030201 = %d\n", 0x04030201);
	printf("0x01010101 = %d\n", 0x01010101);
	memset(a, 0x04030201, 8);
	printf("sizeof(a) = %d\n", sizeof(a));
	printArray(a, 10);
	
	memset(b, 1, sizeof(b));
	
	printf("sizeof(b) = %d\n", sizeof(b));
	printf("0x0101010101010101 = %lld\n", 0x0101010101010101);
	printArray(b, 10);
}


