#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int i = 0;
void Sort(int* arr[])
{
	int i = 0, t=0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);
	int j = 0;
	for (i=0; i < 9; i++)
	{
		int flag = 1;
		for (j = 0; j < sz-i; j++)
		{
			if (arr[j] < arr[j+1])
			{
				t = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = t;
				flag = 0;
			}
		}
		if (flag == 1)
			break;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,7,6,8,9 };
	Sort(&arr);
	for (i = 0; i < 9; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}