#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


//1����������������Ӵ�С���


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


//2����ӡ1~100֮��3�ı���
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


//3�����������������Լ��
//
//int main()
//{
//	int m, n,t;
//	printf("��������������\n");
//	scanf("%d%d", &m,&n);
//	while (t=m%n)
//	{
//		m = n;
//		n = t;
//	}
//	printf("%d", n);
//}


//4������2000~3000��֮�������

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


//5����ӡ100~200֮�������

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