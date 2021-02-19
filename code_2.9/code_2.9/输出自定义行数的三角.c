#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
void main()
{
	int a, b,max;
	scanf("%d%d", &a, &b);
	max=(a > b ? a : b);
	printf("%d\n", max);
	return 0;
	//int i = 1, j,n;
	//scanf("%d", &n);
	//while (i <= n)
	//{
	//	j = 1;
	//	while (j <= 2 * i - 1)
	//	{
	//		printf("*");
	//		j = j + 1;
	//	}
	//	printf("\n");
	//	i = i + 1;
	//}
}
