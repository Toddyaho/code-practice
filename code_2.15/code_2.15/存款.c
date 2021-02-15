#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	float p, r, i1, i2, m1, m2;
	printf("请输入存款金额（单位/元）：\n");
	scanf("%f",& p);
	printf("请输入年利率：\n");
	scanf("%f", &r);
	m1 = p * (1 + r);
	i1 = p * r;
	printf("一年后本息和为:%f    利息:%f\n", m1,i1);
	m2 = p * (1 + r) * (1 + r) * (1 + r);
	i2 = p * r  +p * (1 + r) * r+p*(1+r)*(1+r)*r;
	printf("一年后本息和为:%f    利息:%f\n", m2, i2);
	return 0;
}