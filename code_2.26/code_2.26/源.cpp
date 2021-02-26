#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


//判断奇数
int main()
{
	int m;
	printf("please input a number:\n");
	scanf("%d", &m);
	if (m % 2 == 0)
		printf("偶数");
	else
		printf("奇数");
	return 0;
}


//输出1~100之间的奇数
//int main()
//{
//	int i=0,j=1;
//	for (;i <= 100;i++)
//	{
//		if (i % 2 != 0)
//		{
//			printf("%3d\t", i);
//			if (j % 5 == 0)
//				printf("\n");
//			j++;
//		}
//	}
//	
//	return 0;
//}


//练习使用switch case语句
//int main()
//{
//	printf("1:语文2：数学3：英语4：物理5：化学6：生物7：政治8：历史9：地理\n");
//	int s;
//	scanf("%d", &s);
//	switch (s)
//	{
//		case 1:	printf("chinaese\n"); break;
//		case 2:	printf("math\n"); break;
//		case 3: printf("english"); break;
//		case 4: printf("physical"); break;
//		case 5: printf("chemistry"); break;
//		case 6: printf("bio-political"); break;
//		case 7:	printf("history"); break;
//		case 8: printf("geography"); break;
//		default:printf("请输入小于10的数字\n");
//	}
//}
//int main()
//{
//	int i = 1;
//	while (1)
//	{
//		printf("%d ", i);
//		i++;
//	}
//}
