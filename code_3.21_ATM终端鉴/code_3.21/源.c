#define _CRT_SECURE_NO_WARNINGS 
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE

//#include<stdio.h>


//�����������еĽϴ�ֵ

/*
int MAX(int x, int y)
{
	int max;
	max=x > y ? x : y;
	printf("%d", max);
	return(max);
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	MAX(a, b);
	return 0;
}
*/


//�����������������ݵ���

//#include<stdio.h>
//void SWAP(int* x, int* y)
//{
//	int z;
//	z = *x; 
//	*x = *y;
//	*y = z;
//}
//int main()
//{
//	int a = 19, b = 12;
//	SWAP(&a,&b);
//	printf("a=%d b=%d\n", a, b);
//	/*int c;
//	c = a;
//	a = b; 
//	b = c;*/
//
//	return 0;
//}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
//���庯��
struct users
{
	char name[20];//�û���
	char pass[7];//����
	int account;//�˺�
	float money;//���
}user[100];
int count = 0;
int account = 2017062000;
int find;
int dFind;
int isLogout = 0;
//���ؽ���
void loading() {
	int t = 1;//С����ĸ���
	for (int i = 1; i <= 100; i++)
	{
		printf("\n\n\t\t\t\t\t\t��ӭ����ATM���й���ϵͳ");
		printf("\n\n\t\t\t\t\t\t���Ե�");
		for (int j = 1; j <= t; j++) {
			printf(".");
		}
		t++;
		if (t == 10)t = 1;
		printf("\n\n\t\t\t\t\t\t%d%%", i);
		for (int k = 0; k <= 5000000; k++);//�ӳ�
		system("cls");//����
	}
}
//��ѯ���
void selectMoney() {
	system("cls");//����
	printf("\n\n\n\n\t\t\t\t������ʹ�ò�ѯ����");
	printf("\n\n\t\t\t\t�����˻����Ϊ��%lf", user[find].money);
}
//�����ֽ�
void saveMoney() {
	system("cls");//����
	printf("\n\n\n\n\t\t\t\t������ʹ�ô���");
	int RMB;
	printf("\n\n\t\t\t\t���������");
	scanf("%d", &RMB);
	user[find].money = user[find].money + RMB;
	printf("\n\n\t\t\t\t���ɹ�");
}
//ȡ�����
void getMoney() {
	system("cls");//����
	printf("\n\n\n\n\t\t������ʹ��ȡ���");
	int RMB;
	printf("\n\n\t\t������ȡ���");
	scanf("%d", &RMB);
	if (user[find].money >= RMB) {
		user[find].money = user[find].money - RMB;
		printf("\n\n\t\tȡ��ɹ�");
	}
	else {
		printf("\n\n\t\t����");
	}
}
//���ת��
void transferMoney() {
	system("cls");//����
	int username;//�˺�
	int isFind = 0;
	int RMB;//ת�˽��
	printf("\n\n\n\n\t\t������ʹ��ת�˹���");
	printf("\n\n\t\t������Է����ʺţ�");
	scanf("%d", &username);
	for (int i = 0; i < count; i++) {
		if (username == user[i].account) {
			dFind = i;
			isFind = 1;
			break;
		}
	}
	if (isFind == 1) {
		printf("\n\n\t\t������ת�˽�");
		scanf("%d,", &RMB);
		if (user[find].money >= RMB) {
			user[find].money = user[find].money - RMB;
			user[dFind].money = user[dFind].money + RMB;
			printf("\n\n\t\tת�˳ɹ�");
		}
		else {
			printf("\n\n\t\t����");
		}
	}
	else {
		printf("\n\n\t\tĿ���ʺŲ�����");
	}
}
//ע��
void logout() {
	system("cls");//����
	char confirm;//confirm ȷ��
	printf("\n\n\n\n\t\t������ʹ��ע������");
	printf("\n\n\n\n\t\t%dȷ��ע����", user[find].account);
	fflush(stdin);//������뻺����
	scanf("%c", &confirm);
	if (confirm == 'y' || confirm == 'Y') {
		printf("\n\n\n\n\t\t����ע��%d", user[find].account);
		isLogout = 1;
	}
	else {
		printf("\n\n\n\n\t\tȡ��ע���ʺ�%d,���ط������", user[find].account);
		isLogout = 0;
	}
}
//�����˳�
void quit() {
	system("cls");//����
	printf("�����˳������Ժ�...");
	exit(0);//�����˳�
}
//���ܽ���
void service() {
	char choise;
	while (1) {
		system("cls");
		printf("\n\n\n\n\t\tA����ѯ���");
		printf("\n\n\t\tB�����");
		printf("\n\n\t\tC��ȡ��");
		printf("\n\n\t\tD��ת��");
		printf("\n\n\t\tE���޸�����");
		printf("\n\n\t\tF��ע��");
		printf("\n\n\t\tG���˳�ϵͳ");
		printf("\n\n\t\t��ѡ��:");
		fflush(stdin);//����
		scanf("%c", &choise);
		switch (choise) {
		case 'a':
		case 'A':
			selectMoney(); break;//��ѯ���
		case 'b':
		case 'B':
			saveMoney(); break;//���
		case 'c':
		case 'C':
			//printf("\n\n\t\tִ��ȡ���");break;
			getMoney(); break;//ȡ��
		case 'd':
		case 'D':
			transferMoney(); break;//ת��
		case 'e':
		case 'E':
			printf("\n\n\t\tִ���޸����빦��"); break;
			//updatePass();break;//�޸�����
		case 'f':
		case 'F':
			logout();
			if (isLogout == 1) {
				return;//ֱ�ӽ�����������
			}
			break;//ע��
		case 'g':
		case 'G':
			quit(); break;//�˳�ϵͳ
		default:
			printf("\n\n\t\t���������������������룡"); break;
		}
		printf("\n\n\t\t�����������");
		getch();//�����Ժ��������谴�س�
	}
}
//��������
void inputPass(char pass[]) {
	int i = 0;
	char ch;
	while (1) {
		ch = getch();//�����Ժ��������谴�س�
		if (ch != '\r') {//�ж�������Ƿ��ǻس�
			if (ch != '\b') {//�ж�������Ƿ����˸�
				pass[i] = ch;//��������ַ���ֵ������ĵ�iλ
				i++;
				printf("*");
			}
			else {
				if (i > 0) {
					i--;
					printf("\b \b");
				}
			}
		}
		else {
			break;
		}
	}
	pass[i] = '\0';
	printf("\n");
}
//ע�����
void regist() {
	system("cls");//����
	char rePass[7];
	printf("\n\n\n\n\t\t\t\t�������û�����");
	//Ҫʹ��һ���ַ�������������û���
	fflush(stdin);//ˢ���ַ�������
	gets(user[count].name);//��ȡ�ַ������س�����
	while (1) {
		while (1) {
			printf("\n\n\t\t\t\t���������룺");
			fflush(stdin);//������뻺����
			inputPass(user[count].pass);
			int length = strlen(user[count].pass);//�����ַ������ȣ��䷵��ֵ��һ������
			if (length == 6) {
				break;
			}
			else {
				printf("\n\n\t\t\t\t������������������6λ����");
			}
		}
		printf("\n\n\t\t\t\t���ٴ��������룺");
		fflush(stdin);//������뻺����
		inputPass(rePass);
		if (strcmp(rePass, user[count].pass) == 0) {
			break;
		}
		else {
			printf("\n\n\t\t\t\t�����������벻һ�£�����������");
		}
	}
	account = account + 1;
	user[count].account = account;
	user[count].money = 0;
	system("cls");//����
	printf("\n\n\n\n\t\t\t\tע��ɹ�\n");
	printf("\n\n\t\t\t\t�����˺�Ϊ��%d\n", user[count].account);
	if (count >= 1) {
		printf("\n\n\t\t\t\tǰһ��ע����˺�Ϊ��%d\n", user[count - 1].account);
	}
	count++;
}
//��½����
void login() {
	int zhanghao;
	int sign = 0;
	int find;
	char loginPassword[7];
	//1.����
	system("cls");
	//2.��ʾ �������˺�
	printf("\n\n\n\n\t\t\t\t�������ʺţ�");
	//3.��ȡ������˺� 
	scanf("%d", &zhanghao);
	//4.��������˺����û��������ÿһλ�û����ʺŽ��жԱ�
	for (int i = 0; i < count; i++) {
		if (zhanghao == user[i].account) {
			sign = 1;//��F�������Ϊ1
			find = i;
			break;
		}
	}
	//5.���ƥ�䵽�ˣ���ʾ����������
	if (sign == 1) {
		int j;
		for (j = 1; j <= 3; j++) {
			printf("\n\n\t\t���������룺");
			inputPass(loginPassword);
			if (strcmp(loginPassword, user[find].pass) == 0) {
				printf("\n\n\t\t��½�ɹ�");
				printf("\n\n\t\t����������");
				service();
				break;
			}
			else {
				if (j == 3) {
					printf("\n\n\t\t�����������������������");
					break;
				}
				printf("\n\n\t\t����������������룡");
			}
		}

	}
	else {
		printf("\n\n\t\t�˺Ŵ���");
	}
}
//��ʼ����
void main() {
	loading();
	char ch;
	while (1) {
		printf("\n\n\t\t\t\t\t\ta.�û�ע��");
		printf("\n\n\t\t\t\t\t\tb.�û���¼");
		printf("\n\n\t\t\t\t\t\tc.�˳�ϵͳ");
		printf("\n\n\t\t\t\t\t\t��ѡ��:");
		fflush(stdin);//����ַ����������س���
		scanf("%c", &ch);
		//�ж�������ַ�
		if (ch == 'a' || ch == 'A')
		{
			//ִ��ע�ắ��
			regist();
			//printf("\n\n\t\tִ��ע��");
		}
		else if (ch == 'b' || ch == 'B')
		{
			//ִ�е�¼����
			login();
			//printf("\n\n\t\tִ�е�¼");
		}
		else if (ch == 'c' || ch == 'C')
		{
			//quit();
			printf("\n\n\t\tִ���˳�");
		}
		else
		{
			printf("\n\n\t\t�����������������룡");
		}
		printf("\n\n\t\t�����������...");
		getch();//�����Ժ��������谴�س�
		system("cls");//����
	}
}

//������	����	˵��	��Ŀ	�ļ�	��	��ֹ��ʾ״̬
//����	C4996	'getch': The POSIX name for this item is deprecated.Instead, use the ISO Cand C++ conformant name : _getch.See online help for details.code_3.21	H : \������ϰ\code_3.21\code_3.21\Դ.c	365
