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
		printf("���ĵ��Լ����ػ�����Ҫȡ���ػ��������룺hello\n������:");		
		scanf("%s", input);
	}
	if (strcmp(input, "hello") == 0)
		system("shutdown -a");
	else 
	{
		printf("�������\n");
		goto again;
	}
	return 0;
}