#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	float p, r, i1, i2, m1, m2;
	printf("�����������λ/Ԫ����\n");
	scanf("%f",& p);
	printf("�����������ʣ�\n");
	scanf("%f", &r);
	m1 = p * (1 + r);
	i1 = p * r;
	printf("һ���Ϣ��Ϊ:%f    ��Ϣ:%f\n", m1,i1);
	m2 = p * (1 + r) * (1 + r) * (1 + r);
	i2 = p * r  +p * (1 + r) * r+p*(1+r)*(1+r)*r;
	printf("һ���Ϣ��Ϊ:%f    ��Ϣ:%f\n", m2, i2);
	return 0;
}