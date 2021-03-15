#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


//计算输入数字的阶乘
//int main()
//{
//	int i=1,n;
//	printf("请输入一个整数:\n");
//	scanf("%d", &n);
//	for (;n>1; n--)
//	{
//		i=i*n;
//	}
//	printf("%d", i);
//	return 0;
//}

//计算1！+2！+...+9！+10！
//int main()
//{
//	int sum = 0, reg = 1, i=1;
//	for (; i <= 10; i++)
//	{
//		reg = reg * i;
//		sum = sum + reg; 
//	}
//	printf("%d", sum);
//}

//
////要求客户输入密码，只有三次机会
//int main()
//{
//	int i = 0;
//	int password=0;
//	for (i=2;i>=0; i--)
//	{
//		printf("请输入密码：\n");
//		scanf("%d",&password);
//		if (345 == password)
//			printf("输入正确");
//		if (345 == password)
//			break;
//		else if (i != 0)
//			printf("输入错误，请重新输入（剩余%d次）", i);
//		if(i==0)
//		printf("输入错误，已锁定。\n");
//		
//	}
//	
//
//}
//
//输入一个整数，判断其是几位数
int main()
{
	int a=0,i=0;
	printf("请输入一个整数：\n");
	scanf("%d", &a);
	while(a != 0)
	{
		i++;
		a /= 10;
	}
	printf("%d",i);
}
//int main()
//{
//	unsigned long long a = 0, i = 0;
//	printf("请输入一个整数：\n");
//	scanf("%d", &a);
//		for (;a!=0; )
//		{
//				i++;
//				a /= 10;		
//		}
//	printf("%d", i);
//}
