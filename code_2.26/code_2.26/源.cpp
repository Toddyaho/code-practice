#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


//�ж�����
int main()
{
	int m;
	printf("please input a number:\n");
	scanf("%d", &m);
	if (m % 2 == 0)
		printf("ż��");
	else
		printf("����");
	return 0;
}


//���1~100֮�������
//int main()
//{
//	int i=0,j=1;
//	for (;i <= 100;i++)
//	{
//		if (i % 2 != 0)
//		{
//			printf("%3d\t", i);
//			if (j % 5 == 0)
//				printf("\n");
//			j++;
//		}
//	}
//	
//	return 0;
//}


//��ϰʹ��switch case���
//int main()
//{
//	printf("1:����2����ѧ3��Ӣ��4������5����ѧ6������7������8����ʷ9������\n");
//	int s;
//	scanf("%d", &s);
//	switch (s)
//	{
//		case 1:	printf("chinaese\n"); break;
//		case 2:	printf("math\n"); break;
//		case 3: printf("english"); break;
//		case 4: printf("physical"); break;
//		case 5: printf("chemistry"); break;
//		case 6: printf("bio-political"); break;
//		case 7:	printf("history"); break;
//		case 8: printf("geography"); break;
//		default:printf("������С��10������\n");
//	}
//}
//int main()
//{
//	int i = 1;
//	while (1)
//	{
//		printf("%d ", i);
//		i++;
//	}
//}
