#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


//�����������ֵĽ׳�
//int main()
//{
//	int i=1,n;
//	printf("������һ������:\n");
//	scanf("%d", &n);
//	for (;n>1; n--)
//	{
//		i=i*n;
//	}
//	printf("%d", i);
//	return 0;
//}

//����1��+2��+...+9��+10��
//int main()
//{
//	int sum = 0, reg = 1, i=1;
//	for (; i <= 10; i++)
//	{
//		reg = reg * i;
//		sum = sum + reg; 
//	}
//	printf("%d", sum);
//}

//
////Ҫ��ͻ��������룬ֻ�����λ���
//int main()
//{
//	int i = 0;
//	int password=0;
//	for (i=2;i>=0; i--)
//	{
//		printf("���������룺\n");
//		scanf("%d",&password);
//		if (345 == password)
//			printf("������ȷ");
//		if (345 == password)
//			break;
//		else if (i != 0)
//			printf("����������������루ʣ��%d�Σ�", i);
//		if(i==0)
//		printf("���������������\n");
//		
//	}
//	
//
//}
//
//����һ���������ж����Ǽ�λ��
int main()
{
	int a=0,i=0;
	printf("������һ��������\n");
	scanf("%d", &a);
	while(a != 0)
	{
		i++;
		a /= 10;
	}
	printf("%d",i);
}
//int main()
//{
//	unsigned long long a = 0, i = 0;
//	printf("������һ��������\n");
//	scanf("%d", &a);
//		for (;a!=0; )
//		{
//				i++;
//				a /= 10;		
//		}
//	printf("%d", i);
//}
