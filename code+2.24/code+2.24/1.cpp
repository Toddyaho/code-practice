#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
extern int sum(int);
int main()
{
	int a = 0, i = 1;
	for (; i <=100; i++)
	{
		printf("%3d\t", sum(a));
		if (i % 5 == 0)
			printf("\n");
	}
	return 0;
}