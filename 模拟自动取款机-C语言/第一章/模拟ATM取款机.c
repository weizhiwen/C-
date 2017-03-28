#include <stdio.h>
#include <stdlib.h>
int _money = 1000;
//int *p_money = &_money;
int _password = 123456;
//int *p_password = &_password;
int main()
{
	int _user, flag;
	_user = 123456;
	flag = 1;
	int user, password;
	printf("欢迎使用ATM自动取款机\n");
	while (flag)
	{
		printf("请输入您的账号：_\b");
		scanf_s("%d", &user);
		printf("请输入您的密码：_\b");
		scanf_s("%d", &password);
		if (_user == user && _password == password)
		{
			flag = 0;
			printf("账户登录中······\n");
			printf("您当前的账户余额为%d", _money);
		}
		else
		{
			flag = 1;
			printf("您的账户或者密码有误，请重新输入：");
		}
	}
	int choice = 0;
	while (choice != 5)
	{
		printf("\n*************************\n");
		printf("查询余额_1\n");
		printf("取款_2\n");
		printf("存款_3\n");
		printf("修改密码_4\n");
		printf("取卡_5\n");
		printf("\n*************************\n");
		printf("\n请选择：_\b");
		scanf_s("%d", &choice);
		switch (choice)
		{
		case 1:chaxun(&_money); break;
		case 2:qukuan(&_money); break;
		case 3:cunkuan(&_money); break;
		case 4:gaimi(&_password); break;
		case 5:quka(); break;
		}
		system("cls");
	}
	getchar();
	return 0;
}