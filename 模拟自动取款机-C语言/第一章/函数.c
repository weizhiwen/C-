#include <stdio.h>
#include "函数.h"
void chaxun(int *p)
{
	/*int money = *p;*/
	printf("您的账户余额为%d\n", *p);
	fflush(stdin);
	getchar();

}
void qukuan(int *p)
{
	int get_money, rest_money;
	printf("请输入你要取款的金额：_\b");
	printf("(本机只支持一百元的钞票取款)");
	scanf_s("%d", &get_money);
	rest_money = *p - get_money;
	if (rest_money < 0)
	{
		printf("对不起，您的账户余额不足\n");
	}
	else
	{
		*p -= get_money;
		printf("正在吐钞······\n");
		printf("请收好您的%d元现金", get_money);
	}
	fflush(stdin);
	getchar();
}
void cunkuan(int *p)
{
	int set_money;
	while (1)
	{
		printf("请输入您要存款的金额：_\b");
		scanf_s("%d", &set_money);
		if (set_money < 0)
		{
			printf("对不起，没有负存款，请重新输入\n");
		}
		else
		{
			*p += set_money;
			printf("您已经存了%d元\n", set_money);
			break;
		}
	}
	fflush(stdin);
	getchar();
}
void gaimi(int *p)
{
	int pre_password;
	while (1)
	{
		printf("请输入您当前的密码：______\b\b\b\b\b\b");
		scanf_s("%d", &pre_password);
		if (pre_password != *p)
		{
			printf("您输入的密码有误，请重新输入\n");
		}
		else
			break;
	}
	int new_password1, new_password2;
	while (1)
	{
		printf("请输入您的六位数新密码：______\b\b\b\b\b\b");
		scanf_s("%d", &new_password1);
		printf("请确认您的六位数新密码：______\b\b\b\b\b\b");
		scanf_s("%d", &new_password2);
		if (new_password1 == new_password2)
		{
			if (new_password1 > 100000 && new_password1 < 999999 && new_password1 != 111111)
			{
				*p = new_password1;
				printf("密码修改成功！\n");
				break;
			}
			else
			{
				printf("您输入的密码无效，请重新输入\n");
			}
		}
		else
		{
				printf("两次输入的密码不一致，请重新输入\n");
		}
	}
	fflush(stdin);
	getchar();
}
void quka()
{
	printf("感谢您的使用，请收好您的银行卡\n");
	fflush(stdin);
	getchar();
}