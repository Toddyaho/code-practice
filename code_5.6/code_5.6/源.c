#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<assert.h>
//typedef struct Book {
//	char* pc;
//	char author[20];
//	char press[20];
//	char version[20];
//	int year[10];
//}Stu;
//int main()
//{
//	char arr = { "数据结构" };
//	Stu s1 = { arr,"吴伟民","清华大学","C语言版",2012 };
//	Stu* p = &s1;
//	printf("%s", p->press);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 13; i++) {
//		printf("hehe");
//		arr[i] = 0;
//	}
//	return 0;
//}

//void my_strcpy(char* dest, char* src) {
//	while (*src != '\0') {
//		*dest++ = *src++;
//
//	}
//	*dest = *src;        
//}
//void my_strcpy(char* dest,const char* src) {
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++) {
//		;
//	}
//}
//int main()
//{
//	char arr1[] = "*********";
//	char arr2[] = "hello";
//	my_trcpy(arr1, NULL);
//	printf("%s", arr1);
//}

int main()
{
	int a = -128;
	int b = 128;
}
//a-128   
//10000000 00000000 00000000 10000000   原码
//11111111 11111111 11111111 01111111   反码
//11111111 11111111 11111111 10000000	补码
//10000000
//11111111 1111111 1111111 10000000

//a=128
//00000000 00000000 00000000 10000000	原码
//00000000 00000000 00000000 10000000	反码
//00000000 00000000 00000000 10000000	补码
//10000000
//11111111 11111111 11111111 10000000   原码
