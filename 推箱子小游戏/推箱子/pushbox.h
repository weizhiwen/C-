#include "stdafx.h"

#define ROWS 8
#define COLS 9
//1.��ά�����������ͼ
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

//4.����С���ƶ�
int CurrentPersonRow = 1;
int CurrentPersonCol = 2;

void Showmap();
int IsSuccess();
void MoveToUp();
void MoveToDown();
void MoveToLeft();
void MoveToRight();