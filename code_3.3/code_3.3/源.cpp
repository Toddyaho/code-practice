#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
//{
//	int i=0;
//	while (i <= 100)
//	{
//		i++;
//		if (i % 5 == 0)
//			continue;
//		printf("%d\t", i);
//		
//	} 
//	return 0;
//}
{
	int ch = 0,ret=0;
	static char password[10];
	printf("please input password>\n");
	scanf("%s", password);
	while ((ret = getchar() )!= '\n')
	{
		;
	}
	printf("please confirm(y/n):\n");
	ch = getchar();
	if (ch == 'y')
		printf("success");
	else if (ch == 'n')
		printf("failed");
	else
		printf("please re-enter ");
	return 0;

}