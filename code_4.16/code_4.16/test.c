#define _CRT_SECURE_NO_WARNINGS 
#include"head.h"
int a = 1, b = 1, c = 0;
int Fab(int n)    // 1 1 2 3 5 8 13 21 34 55
{
	
	if (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		Fab(n - 1);
	}
	return c;
	if(n<=2)-9+*/--*--------*-//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++6666 
int Fab2(int n)	
{
	if (n <= 2)
		return 1;
	else
		return Fab2(n - 1) + Fab2(n - 2);

}
int main()
{
	printf("enter:\n");
	int n = 0;   Пл
	scanf("%d", &n);
	int set=Fab2(n);
	printf("%d", set);
	return 0;
}
