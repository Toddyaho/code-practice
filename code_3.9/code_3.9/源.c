#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>
//输入一句话，演示多个字符向两端移动，向中间汇聚
int main()
{
	char arr1[100] = { 0 };
	char arr2[100] = { 0 };
	printf("please input a word>");
	//scanf("%s", arr1);
	int j = 0;
	while (j<100)
	{
		arr1[j] = getchar();
		if (arr1[j] == '\n')
			break;
		j++;
	}
	int sz = strlen(arr1);
	int left = 0;
	int right = sz-2;
	int i = 0;
	for(i=0;i<sz-2;i++)
	{
		arr2[i]='*';
	}
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		system("cls");
		printf("%s\n", arr2);
		Sleep(1000);
		left++;
		right--;
	}
}
//int main()
//{
//	char arr1[50];
//	char arr2[50];  
//	scanf("%s", arr1);//arr1输入字符串
//	int sz = strlen(arr1) - 1;//计算arr1中字符个数
//}
////查找有序数组中的某个元素n
////int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i,n = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//		printf("%d", sz);
//	printf("请输入您要查找的数字：\n");
//	scanf("%d", &n);
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] == n)
//		{
//			printf("arr[%d]", i);
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int n = 0, left=0, right=0, mid=0,sz=0;
//	printf("请输入要查找的数字：\n");
//	scanf("%d", &n);
//	sz = sizeof(arr) / sizeof(arr[0]);
//	left = 0;
//	right =sz-1;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] < n)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，是arr[%d]", mid);
//			break;
//		}
//	}
//	if (left >right)
//	{
//		printf("没找到");
//	}
//	return 0;
//}
