#include <stdio.h>
#include "����.h"
void chaxun(int *p)
{
	/*int money = *p;*/
	printf("�����˻����Ϊ%d\n", *p);
	fflush(stdin);
	getchar();

}
void qukuan(int *p)
{
	int get_money, rest_money;
	printf("��������Ҫȡ��Ľ�_\b");
	printf("(����ֻ֧��һ��Ԫ�ĳ�Ʊȡ��)");
	scanf_s("%d", &get_money);
	rest_money = *p - get_money;
	if (rest_money < 0)
	{
		printf("�Բ��������˻�����\n");
	}
	else
	{
		*p -= get_money;
		printf("�����³�������������\n");
		printf("���պ�����%dԪ�ֽ�", get_money);
	}
	fflush(stdin);
	getchar();
}
void cunkuan(int *p)
{
	int set_money;
	while (1)
	{
		printf("��������Ҫ���Ľ�_\b");
		scanf_s("%d", &set_money);
		if (set_money < 0)
		{
			printf("�Բ���û�и�������������\n");
		}
		else
		{
			*p += set_money;
			printf("���Ѿ�����%dԪ\n", set_money);
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
		printf("����������ǰ�����룺______\b\b\b\b\b\b");
		scanf_s("%d", &pre_password);
		if (pre_password != *p)
		{
			printf("�������������������������\n");
		}
		else
			break;
	}
	int new_password1, new_password2;
	while (1)
	{
		printf("������������λ�������룺______\b\b\b\b\b\b");
		scanf_s("%d", &new_password1);
		printf("��ȷ��������λ�������룺______\b\b\b\b\b\b");
		scanf_s("%d", &new_password2);
		if (new_password1 == new_password2)
		{
			if (new_password1 > 100000 && new_password1 < 999999 && new_password1 != 111111)
			{
				*p = new_password1;
				printf("�����޸ĳɹ���\n");
				break;
			}
			else
			{
				printf("�������������Ч������������\n");
			}
		}
		else
		{
				printf("������������벻һ�£�����������\n");
		}
	}
	fflush(stdin);
	getchar();
}
void quka()
{
	printf("��л����ʹ�ã����պ��������п�\n");
	fflush(stdin);
	getchar();
}