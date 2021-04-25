#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4 };
	printf("%p\n", arr);
	printf("%p\n", arr[0]);
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	return 0;
}