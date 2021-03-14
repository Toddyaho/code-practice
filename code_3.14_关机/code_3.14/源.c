#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

	char input[10];
	again:
	{
		system("shutdown -s -t 40");
		printf("您的电脑即将关机，若要取消关机，请输入：hello\n请输入:");		
		scanf("%s", input);
	}
	if (strcmp(input, "hello") == 0)
		system("shutdown -a");
	else 
	{
		printf("输入错误！\n");
		goto again;
	}
	return 0;
}