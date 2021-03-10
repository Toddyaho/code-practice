#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


//1、将输入的三个数从大到小输出


//int M(x, y, z)
//{
//	int t;
//	if (x < y)
//	{
//		t = x;
//		x = y;
//		y = t;
//	}
//	if (x < z)
//	{
//		t = x;
//		x = z;
//		z = t;
//	}
//	if (y < z)
//	{
//		t = y;
//		y = z;
//		z = t;
//	}
//	printf("%d %d %d", x, y, z);
//	return(0);
//}
//int main()
//{
//	int a=0,b=0,c=0;
//	scanf("%d %d %d", &a,&b,&c);
//	M(a, b, c);
//	return 0;
//}


//2、打印1~100之间3的倍数
//
//int main()
//{
//	int i = 1,j=0;
//	while (i <= 100)
//	{
//		if (i % 3 == 0)
//		{
//			printf("%d ", i);
//			j++;
//			if (j % 5 == 0)
//			{
//				printf("\n");
//			}
//		}
//		i++;
//	}
//}


//3、计算两个数的最大公约数
//
//int main()
//{
//	int m, n,t;
//	printf("请输入两个数：\n");
//	scanf("%d%d", &m,&n);
//	while (t=m%n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("%d", n);
//}


//4、计算2000~3000年之间的闰年

//int main()
//{
//	int year = 2000;
//	int j=0;
//	for (year = 2000; year <= 3000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		{
//			printf("%d ", year);
//			j++;
//		}
//	}
//	printf("\n%d", j);
//}


//5、打印100~200之间的素数

#include<math.h>
int main()
{
	int i = 0, j = 2;
	for (i = 101; i < 200000; i+=2)
	{
		j = 2;
		while (j <= sqrt(i))
		{
			if (i % j == 0)
				break;
			j++;
		}
		if (j>sqrt(i))
		{
			printf("%d ", i);
		}
		
	}
}