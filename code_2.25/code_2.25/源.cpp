#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char ch = 'a';
//	char* c = &ch;
//	printf("%p\n", c);
//	return 0;
//}
struct People
{
	char name[20],hobby[20];
	short age;
	float height, weight;
};
int main()
{
	
	struct People srq = { "������","ѧϰ",20,150,55 };
	struct People* cf = &srq;
	strcpy(cf->name, "������");
	printf("������%s\n",cf->name);
	printf("���䣺%d��\n", cf->age);
	printf("��ߣ�%4.1fcm\t���أ�%4.1fkg\n", (*cf).height, srq.weight);
	printf("���ã�%s\n", srq.hobby);
	printf("%p\n",cf);
	return 0;
}