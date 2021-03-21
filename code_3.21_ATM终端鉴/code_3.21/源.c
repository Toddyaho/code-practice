#define _CRT_SECURE_NO_WARNINGS 
#define _CRT_SECURE_NO_DEPRECATE
#define _CRT_NONSTDC_NO_DEPRECATE

//#include<stdio.h>


//求两个整数中的较大值

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


//将两个整形数据内容调换

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
//定义函数
struct users
{
	char name[20];//用户名
	char pass[7];//密码
	int account;//账号
	float money;//余额
}user[100];
int count = 0;
int account = 2017062000;
int find;
int dFind;
int isLogout = 0;
//加载界面
void loading() {
	int t = 1;//小数点的个数
	for (int i = 1; i <= 100; i++)
	{
		printf("\n\n\t\t\t\t\t\t欢迎进入ATM银行管理系统");
		printf("\n\n\t\t\t\t\t\t请稍等");
		for (int j = 1; j <= t; j++) {
			printf(".");
		}
		t++;
		if (t == 10)t = 1;
		printf("\n\n\t\t\t\t\t\t%d%%", i);
		for (int k = 0; k <= 5000000; k++);//延迟
		system("cls");//清屏
	}
}
//查询余额
void selectMoney() {
	system("cls");//清屏
	printf("\n\n\n\n\t\t\t\t您正在使用查询余额功能");
	printf("\n\n\t\t\t\t您的账户余额为：%lf", user[find].money);
}
//存入现金
void saveMoney() {
	system("cls");//清屏
	printf("\n\n\n\n\t\t\t\t您正在使用存款功能");
	int RMB;
	printf("\n\n\t\t\t\t请输入存款金额：");
	scanf("%d", &RMB);
	user[find].money = user[find].money + RMB;
	printf("\n\n\t\t\t\t存款成功");
}
//取出存款
void getMoney() {
	system("cls");//清屏
	printf("\n\n\n\n\t\t您正在使用取款功能");
	int RMB;
	printf("\n\n\t\t请输入取款金额：");
	scanf("%d", &RMB);
	if (user[find].money >= RMB) {
		user[find].money = user[find].money - RMB;
		printf("\n\n\t\t取款成功");
	}
	else {
		printf("\n\n\t\t余额不足");
	}
}
//金额转账
void transferMoney() {
	system("cls");//清屏
	int username;//账号
	int isFind = 0;
	int RMB;//转账金额
	printf("\n\n\n\n\t\t您正在使用转账功能");
	printf("\n\n\t\t请输入对方的帐号：");
	scanf("%d", &username);
	for (int i = 0; i < count; i++) {
		if (username == user[i].account) {
			dFind = i;
			isFind = 1;
			break;
		}
	}
	if (isFind == 1) {
		printf("\n\n\t\t请输入转账金额：");
		scanf("%d,", &RMB);
		if (user[find].money >= RMB) {
			user[find].money = user[find].money - RMB;
			user[dFind].money = user[dFind].money + RMB;
			printf("\n\n\t\t转账成功");
		}
		else {
			printf("\n\n\t\t余额不足");
		}
	}
	else {
		printf("\n\n\t\t目标帐号不存在");
	}
}
//注销
void logout() {
	system("cls");//清屏
	char confirm;//confirm 确认
	printf("\n\n\n\n\t\t您正在使用注销功能");
	printf("\n\n\n\n\t\t%d确认注销？", user[find].account);
	fflush(stdin);//清空输入缓冲区
	scanf("%c", &confirm);
	if (confirm == 'y' || confirm == 'Y') {
		printf("\n\n\n\n\t\t正在注销%d", user[find].account);
		isLogout = 1;
	}
	else {
		printf("\n\n\n\n\t\t取消注销帐号%d,返回服务界面", user[find].account);
		isLogout = 0;
	}
}
//结束退出
void quit() {
	system("cls");//清屏
	printf("正在退出，请稍后...");
	exit(0);//正常退出
}
//功能界面
void service() {
	char choise;
	while (1) {
		system("cls");
		printf("\n\n\n\n\t\tA、查询余额");
		printf("\n\n\t\tB、存款");
		printf("\n\n\t\tC、取款");
		printf("\n\n\t\tD、转账");
		printf("\n\n\t\tE、修改密码");
		printf("\n\n\t\tF、注销");
		printf("\n\n\t\tG、退出系统");
		printf("\n\n\t\t请选择:");
		fflush(stdin);//清屏
		scanf("%c", &choise);
		switch (choise) {
		case 'a':
		case 'A':
			selectMoney(); break;//查询余额
		case 'b':
		case 'B':
			saveMoney(); break;//存款
		case 'c':
		case 'C':
			//printf("\n\n\t\t执行取款功能");break;
			getMoney(); break;//取款
		case 'd':
		case 'D':
			transferMoney(); break;//转账
		case 'e':
		case 'E':
			printf("\n\n\t\t执行修改密码功能"); break;
			//updatePass();break;//修改密码
		case 'f':
		case 'F':
			logout();
			if (isLogout == 1) {
				return;//直接结束所处函数
			}
			break;//注销
		case 'g':
		case 'G':
			quit(); break;//退出系统
		default:
			printf("\n\n\t\t您的输入有误，请重新输入！"); break;
		}
		printf("\n\n\t\t按任意键继续");
		getch();//不回显函数，不需按回车
	}
}
//隐藏密码
void inputPass(char pass[]) {
	int i = 0;
	char ch;
	while (1) {
		ch = getch();//不回显函数，不需按回车
		if (ch != '\r') {//判断输入的是否是回车
			if (ch != '\b') {//判断输入的是否是退格
				pass[i] = ch;//将输入的字符赋值给密码的第i位
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
//注册界面
void regist() {
	system("cls");//清屏
	char rePass[7];
	printf("\n\n\n\n\t\t\t\t请输入用户名：");
	//要使用一个字符串接收输入的用户名
	fflush(stdin);//刷新字符缓冲区
	gets(user[count].name);//读取字符串，回车结束
	while (1) {
		while (1) {
			printf("\n\n\t\t\t\t请输入密码：");
			fflush(stdin);//清空输入缓冲区
			inputPass(user[count].pass);
			int length = strlen(user[count].pass);//计算字符串长度，其返回值是一个整数
			if (length == 6) {
				break;
			}
			else {
				printf("\n\n\t\t\t\t密码输入有误！请输入6位密码");
			}
		}
		printf("\n\n\t\t\t\t请再次输入密码：");
		fflush(stdin);//清空输入缓冲区
		inputPass(rePass);
		if (strcmp(rePass, user[count].pass) == 0) {
			break;
		}
		else {
			printf("\n\n\t\t\t\t两次密码输入不一致，请重新输入");
		}
	}
	account = account + 1;
	user[count].account = account;
	user[count].money = 0;
	system("cls");//清屏
	printf("\n\n\n\n\t\t\t\t注册成功\n");
	printf("\n\n\t\t\t\t您的账号为：%d\n", user[count].account);
	if (count >= 1) {
		printf("\n\n\t\t\t\t前一个注册的账号为：%d\n", user[count - 1].account);
	}
	count++;
}
//登陆界面
void login() {
	int zhanghao;
	int sign = 0;
	int find;
	char loginPassword[7];
	//1.清屏
	system("cls");
	//2.提示 请输入账号
	printf("\n\n\n\n\t\t\t\t请输入帐号：");
	//3.获取输入的账号 
	scanf("%d", &zhanghao);
	//4.将输入的账号与用户数组里的每一位用户的帐号进行对比
	for (int i = 0; i < count; i++) {
		if (zhanghao == user[i].account) {
			sign = 1;//将F标记设置为1
			find = i;
			break;
		}
	}
	//5.如果匹配到了，提示请输入密码
	if (sign == 1) {
		int j;
		for (j = 1; j <= 3; j++) {
			printf("\n\n\t\t请输入密码：");
			inputPass(loginPassword);
			if (strcmp(loginPassword, user[find].pass) == 0) {
				printf("\n\n\t\t登陆成功");
				printf("\n\n\t\t进入服务界面");
				service();
				break;
			}
			else {
				if (j == 3) {
					printf("\n\n\t\t密码三次输入错误，已锁定！");
					break;
				}
				printf("\n\n\t\t密码错误，请重新输入！");
			}
		}

	}
	else {
		printf("\n\n\t\t账号错误");
	}
}
//初始界面
void main() {
	loading();
	char ch;
	while (1) {
		printf("\n\n\t\t\t\t\t\ta.用户注册");
		printf("\n\n\t\t\t\t\t\tb.用户登录");
		printf("\n\n\t\t\t\t\t\tc.退出系统");
		printf("\n\n\t\t\t\t\t\t请选择:");
		fflush(stdin);//清空字符缓冲区，回车符
		scanf("%c", &ch);
		//判断输入的字符
		if (ch == 'a' || ch == 'A')
		{
			//执行注册函数
			regist();
			//printf("\n\n\t\t执行注册");
		}
		else if (ch == 'b' || ch == 'B')
		{
			//执行登录函数
			login();
			//printf("\n\n\t\t执行登录");
		}
		else if (ch == 'c' || ch == 'C')
		{
			//quit();
			printf("\n\n\t\t执行退出");
		}
		else
		{
			printf("\n\n\t\t输入有误，请重新输入！");
		}
		printf("\n\n\t\t按任意键继续...");
		getch();//不回显函数，不需按回车
		system("cls");//清屏
	}
}

//严重性	代码	说明	项目	文件	行	禁止显示状态
//错误	C4996	'getch': The POSIX name for this item is deprecated.Instead, use the ISO Cand C++ conformant name : _getch.See online help for details.code_3.21	H : \代码练习\code_3.21\code_3.21\源.c	365
