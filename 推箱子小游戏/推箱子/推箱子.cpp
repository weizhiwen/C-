// 推箱子.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "推箱子.h"

//2.显示地图
void Showmap();

//3.用户输入值
char InputDirection();

//5.判断移动后的位置情况

int _tmain(int argc, _TCHAR* argv[])
{
	
	int flag = 1;
	while (flag)
	{
		system("cls");
		Showmap();
		if (IsSuccess())
		{
			printf("恭喜你，游戏胜利啦！\n");
			break;
		}
		char direction = InputDirection();
		//判断输入方向后的操作                                                                           
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
			printf("哎呀！你的智商真低.\n");
			flag = 0;
			break;
		}
	
	}
	system("pause");
	return 0;
}
char InputDirection()
{
	printf("欢迎来到推箱子的世界！\n");
	printf("P代表小人,X代表箱子,O代表箱子要推到的位置.");
	printf("W(w)：上. S(s)：下. A(a)：左. D(d)：右.\nQ(q)结束游戏.\n");
	printf("请输入小人的前进方向:\n");
	char direction;
	rewind(stdin);
	scanf_s("%c", &direction);
	return direction;
}
