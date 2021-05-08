#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);
	/*while (num)
	{
		if (num % 2 == 1)
			count++;
		num /= 2;
	}
*/
	for (int i = 0; i < 32; i++) {
		if (1 ==((num >> i) & 1))
			count++;
	}
	printf("%d", count);
}