// ������.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include "������.h"

//2.��ʾ��ͼ
void Showmap();

//3.�û�����ֵ
char InputDirection();

//5.�ж��ƶ����λ�����

int _tmain(int argc, _TCHAR* argv[])
{
	
	int flag = 1;
	while (flag)
	{
		system("cls");
		Showmap();
		if (IsSuccess())
		{
			printf("��ϲ�㣬��Ϸʤ������\n");
			break;
		}
		char direction = InputDirection();
		//�ж����뷽���Ĳ���                                                                           
		switch (direction)
		{
		case 'W':
		case 'w':
			MoveToUp();
			break;
		case 'S':
		case 's':
			MoveToDown();
			break;
		case 'A':
		case 'a':
			MoveToLeft();
			break;
		case 'D':
		case 'd':
			MoveToRight();
			break;
		case 'Q':
		case 'q':
			printf("��ѽ������������.\n");
			flag = 0;
			break;
		}
	
	}
	system("pause");
	return 0;
}
char InputDirection()
{
	printf("��ӭ���������ӵ����磡\n");
	printf("P����С��,X��������,O��������Ҫ�Ƶ���λ��.");
	printf("W(w)����. S(s)����. A(a)����. D(d)����.\nQ(q)������Ϸ.\n");
	printf("������С�˵�ǰ������:\n");
	char direction;
	rewind(stdin);
	scanf_s("%c", &direction);
	return direction;
}
