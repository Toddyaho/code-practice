#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<math.h>
//求素数


//int Prime(int m)
//{
//	int j = 0, s = 0;
//	s = sqrt(m);
//	for(j=2;j<s;j++)
//	{ 
//		if (m % j == 0)
//			return 0;
//	}
//		return 1;
//	
//}
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		if(Prime(i)==1)
//		printf("%d\t",i);
//
//	}
//	return 0;
//}


//判断闰年

//int Jud(int y)
//{
//	if (y % 400 == 0 ||( y % 4 == 0 && y % 100 != 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("please input a year:\n");
//	scanf("%d", &year);
//	if (Jud(year) == 1)
//		printf("is leap year!\n");
//	else
//		printf("no leap year!\n");
//	return 0;
//}


//二分查找
//int Search(int m, int arr[],int sz)
//{
//	int  mid, right, left;
//	right = sz-1;
//	left = 0;
//	while (left <=right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < m)
//		{
//			left = mid+1;
//		}
//		else if (arr[mid] > m)
//		{
//			right = mid-1;
//		}
//		else if (arr[mid] = m)
//		{
//			return mid;
//		}
//	}
//		return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int m = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &m);
//	int set = Search(m, arr, sz);
//	if (set != -1)
//		printf("arr[% d]", set);
//	else
//		printf("zhaobudao");
//	return 0;
//}


//利用函数递归输出某个数字得每一位

//void Printf(int n)
//{
//	if (n > 9)
//	{
//		Printf(n /10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	printf("please input:\n");
////	scanf("%d", &n);//123
//	Printf(n);
//}
int My_Strlen(char* str)
{
	if (*str != '\0')
		return 1+My_Strlen(str+1);
	else
		return 0;
}
int main()
{
	char arr[] = "abdadad acd";
	int len = My_Strlen(arr);
	printf("len=%d\n", len);
}