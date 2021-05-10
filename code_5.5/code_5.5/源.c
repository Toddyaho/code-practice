#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
//乘法口诀表
//void Print(int n) {
//	int i = 0;
//	for (i = 1; i < n; i++) {
//		int j = 0;
//		for (j=1; j <= i; j++) {
//			printf("%dx%d=%-3d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}

//递归方式打印一个数的每一位  123

//void Print(int n) {
//	if (n > 10) {
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main() 
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//}

//递归和非递归实现求n的阶乘
//int Print(int n) { 
//	if ((n == 1 )|| (n == 0)) {
//		return 1;
//	}
//	else
//		return n*Print(n - 1);  //  5*4*3*2*1
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int n2=Print(n);
//	printf("%d", n2);
//}

//递归实现strlen
//int Strlen1(char* a) {
//	if (*a != '\0') {
//		return (1 + Strlen1(a + 1));
//	}
//	else
//		return 0;
//}
//int Strlen2(char* p) {
//	char* pa = p;
//	while (*pa) {
//		pa++;
//	}
//	return pa - p;
//}
//int main()
//{
//	char arr[] = "hello word";
//	int count=Strlen1(arr);
//	int ret = Strlen2(arr);
//	printf("%d %d", count,ret);
//}

//递归实现字符倒叙打印
void Print(char* arr,int n) {
	int left = 0;
	int right = n-1;
	char tmp=0;
	while(left<right) {
		tmp = arr[left];
		arr[left]= arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
	printf("%s", arr);
}
int main()
{
	char arr[] = "hello word";
	int sz = strlen(arr);
	Print(arr,sz);
}