#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
//void init(int arr[],int n) {
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		arr[i] = 0;
//	}
//}
void print(int arr[], int n) {
	int i = 0;
	for (i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}
//void resever(int arr[], int n) {
//	int i = 0,t=0;
//	for (i = 0; i<5; i++) {
//		t = arr[i];
//		 arr[i]= arr[n - 1];
//		 arr[n - 1] = t;
//		 n--;
//	}
//}
void swap(int a[],int b[],int sa,int sb) {
	int i = 0, j = 0, t=0;
	for (i = 0; i < sa; i++) {
		t = a[i];
		a[i] = b[j];
		b[j] = t;
		j++;
	}
}
void swap1(int* a, int* b, int* t) {
	t = a;
	a = b; 
	b = t;
}
int main()
{
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[10] = { 101,102,103,104,105,106,107,108,109,110 };
	int t[10] = { 0 };
	swap1(&a, &b, &t);
	int sa = sizeof(a) / sizeof(a[0]);
	int sb = sizeof(b) / sizeof(b[0]);
	//swap(a,b, sa, sb);
	//init(arr, sz);
	print(a, sa);
	print(b, sb);
	/*resever(arr, sz);
	print(arr, sz)*/;
	return 0;
}