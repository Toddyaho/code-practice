#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


//��1~100֮��9�ĸ���


//int main()
//{		
//	int i = 0, n = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			printf("%d ", i);
//			n++;
//		}
//		if(i/10==9)
//		{
//			printf("%d ", i);
//			n++; 
//		}
//		
//	}
//	printf("\n%d", n);
//	return 0;
//}


//����1/1-1/2+1/3-1/4+1/5.....+1/99-1/100��ֵ

//int main()
//{
//	int m = 1, sign = 1;
//	float sum = 0;
//	for (m = 1; m <= 100; m++)
//	{
//		sum += (sign * (1.0 / m)); 
//		sign = -sign;
//	}
//	printf("%lf", sum);
//
//}


//�Ƚ�n�����Ĵ�С

//int main()
//{
//	printf("������n(n<=100)�����֣�\n");
//	int i = 0,n=0;
//	int arr[100];
//	int max = arr[1];
//	while(getchar()!='\n')
//	{
//		scanf("%d", &arr[n]);
//		n++;
//	}
//	for (i = 0; i <n; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max=%d", max);
//	return 0;
//}


//����Ļ�����һ��1~9���㷨�ھ���
//1*1
//1*2 2*2
//1*3 2*3 3*3
//1*4 2*4 3*4 4*4

//int main()
//{
//	int i = 0, j = 0;
//	for (i = 1; i <10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


int main()
{
	int i = 0, j = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
	printf("��������Ҫ���ҵ����֣�\n");
	scanf("%d", &j);
	for (i = 0;i<11; i++)
	{
		if (arr[i] == j)
		{
			printf("�ҵ��ˣ�arr[%d]", i);
			break;
		}
	}
	if (i == 11)
	{
		printf("û�ҵ�");
	}
	return 0;
}