#include "stdafx.h"

#define ROWS 8
#define COLS 9
//1.二维数组来储存地图
char Map[ROWS][COLS] =
{
	" #####  ",
	" #P ### ",
	" # X  # ",
	"### # ##",
	"#O# #  #",
	"#OX  # #",
	"#O   X #",
	"########"
};

//4.控制小人移动
int CurrentPersonRow = 1;
int CurrentPersonCol = 2;

void Showmap();
int IsSuccess();
void MoveToUp();
void MoveToDown();
void MoveToLeft();
void MoveToRight();