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
	printf("��ӭʹ��ATM�Զ�ȡ���\n");
	while (flag)
	{
		printf("�����������˺ţ�_\b");
		scanf_s("%d", &user);
		printf("�������������룺_\b");
		scanf_s("%d", &password);
		if (_user == user && _password == password)
		{
			flag = 0;
			printf("�˻���¼�С�����������\n");
			printf("����ǰ���˻����Ϊ%d", _money);
		}
		else
		{
			flag = 1;
			printf("�����˻����������������������룺");
		}
	}
	int choice = 0;
	while (choice != 5)
	{
		printf("\n*************************\n");
		printf("��ѯ���_1\n");
		printf("ȡ��_2\n");
		printf("���_3\n");
		printf("�޸�����_4\n");
		printf("ȡ��_5\n");
		printf("\n*************************\n");
		printf("\n��ѡ��_\b");
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