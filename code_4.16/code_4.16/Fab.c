#define _CRT_SECURE_NO_WARNINGS 
#include"head.h"
int Fab(int n)
{
	int a = 1, b =1, c = 0;
	for (int i = 0; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}