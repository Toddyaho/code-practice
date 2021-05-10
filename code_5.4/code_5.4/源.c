#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//int main()
//{
//	 int sum = 0, count = 0;
//	scanf("%d", &sum);  
//	while(sum){		
//		if (sum % 2 == 1)
//			count++;
//		sum /= 2;
//	}
//	while (sum!=0) {
//		if((sum & 1) == 1)
//		count++;
//		sum = sum >> 1;
//	}
//	for (int i = 0;i<32; i++) {
//		if (((sum>>i) & 1) == 1) {
//			count++;
//		}
//	}
//	while (sum) {
//
//		sum =( sum & (sum - 1));
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}
//计算两个数

//计算两个数二进制位中不同位的个数
//int main()
//{
//	int a = 19;		//00000000 00000000 00000000 00010011
//	int b = 20;		//00000000 00000000 00000000 00010100
//	int m = a ^ b;
//	int count = 0;
//	for (int i = 0; i < 32; i ++)
//	{
//		if (((m >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d", count);
//}

//打印一个数字二进制位的偶数位和奇数位

//int main()
//{
//	int a = -1;		//00000000000000000000000000001010
//	for (int i = 32; i > 0;i-=2) {
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 31; i >0; i -= 2) {
//		printf("%d ", (a >> i) & 1);
//	}
//}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7 };
	int* p = arr;
	int sz = sizeof(arr) / sizeof(arr[0]);
	
	for (int i = 0; i < sz; i++) {
		printf("%d", *(p+i));
	}
}