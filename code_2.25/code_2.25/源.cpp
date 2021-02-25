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
	
	struct People srq = { "苏芮琪","学习",20,150,55 };
	struct People* cf = &srq;
	strcpy(cf->name, "苏锐奇");
	printf("姓名：%s\n",cf->name);
	printf("年龄：%d岁\n", cf->age);
	printf("身高：%4.1fcm\t体重：%4.1fkg\n", (*cf).height, srq.weight);
	printf("爱好：%s\n", srq.hobby);
	printf("%p\n",cf);
	return 0;
}