#include "stdafx.h"
#include <iostream>
#include "pushbox.h"

void Showmap()
{
	for (int i = 0; i < ROWS; i++)
		printf("%s\n", Map[i]);
}

int IsSuccess()
{
	if (Map[4][1] == 'X'&& Map[5][1] == 'X'&& Map[6][1] == 'X')
		return 1;
	else
		return 0;
}

void MoveToUp()
{
	int NextPersonRow = CurrentPersonRow - 1;
	int NextPersonCol = CurrentPersonCol;
	if (Map[NextPersonRow][NextPersonCol] == ' ')
	{
		Map[NextPersonRow][NextPersonCol] = 'P';
		Map[CurrentPersonRow][CurrentPersonCol] = ' ';
		CurrentPersonRow = NextPersonRow;
		CurrentPersonCol = NextPersonCol;
	}
	else if (Map[NextPersonRow][NextPersonCol] == 'O')
	{
		Map[NextPersonRow][NextPersonCol] = 'P';
		Map[CurrentPersonRow][CurrentPersonCol] = ' ';
		CurrentPersonRow = NextPersonRow;
		CurrentPersonCol = NextPersonCol;
	}
	else if (Map[NextPersonRow][NextPersonCol] == 'X')
	{
		int NextBoxRow = NextPersonRow - 1;
		int NextBoxCol = NextPersonCol;
		if (Map[NextBoxRow][NextBoxCol] == ' ' || Map[NextBoxRow][NextBoxCol] == 'O')
		{
			Map[NextBoxRow][NextBoxCol] = 'X';
			Map[NextPersonRow][NextPersonCol] = 'P';
			Map[CurrentPersonRow][CurrentPersonCol] = ' ';
			CurrentPersonRow = NextPersonRow;
			CurrentPersonCol = NextPersonCol;
		}
	}
}
void MoveToDown()
{
	int NextPersonRow = CurrentPersonRow + 1;
	int NextPersonCol = CurrentPersonCol;
	if (Map[NextPersonRow][NextPersonCol] == ' ')
	{
		Map[NextPersonRow][NextPersonCol] = 'P';
		Map[CurrentPersonRow][CurrentPersonCol] = ' ';
		CurrentPersonRow = NextPersonRow;
		CurrentPersonCol = NextPersonCol;
	}
	else if (Map[NextPersonRow][NextPersonCol] == 'O')
	{
		Map[NextPersonRow][NextPersonCol] = 'P';
		Map[CurrentPersonRow][CurrentPersonCol] = ' ';
		CurrentPersonRow = NextPersonRow;
		CurrentPersonCol = NextPersonCol;
	}
	else if (Map[NextPersonRow][NextPersonCol] == 'X')
	{
		int NextBoxRow = NextPersonRow + 1;
		int NextBoxCol = NextPersonCol;
		if (Map[NextBoxRow][NextBoxCol] == ' ' || Map[NextBoxRow][NextBoxCol] == 'O')
		{
			Map[NextBoxRow][NextBoxCol] = 'X';
			Map[NextPersonRow][NextPersonCol] = 'P';
			Map[CurrentPersonRow][CurrentPersonCol] = ' ';
			CurrentPersonRow = NextPersonRow;
			CurrentPersonCol = NextPersonCol;
		}
	}
}
void MoveToLeft()
{
	int NextPersonRow = CurrentPersonRow;
	int NextPersonCol = CurrentPersonCol - 1;
	if (Map[NextPersonRow][NextPersonCol] == ' ')
	{
		Map[NextPersonRow][NextPersonCol] = 'P';
		Map[CurrentPersonRow][CurrentPersonCol] = ' ';
		CurrentPersonRow = NextPersonRow;
		CurrentPersonCol = NextPersonCol;
	}
	else if (Map[NextPersonRow][NextPersonCol] == 'O')
	{
		Map[NextPersonRow][NextPersonCol] = 'P';
		Map[CurrentPersonRow][CurrentPersonCol] = ' ';
		CurrentPersonRow = NextPersonRow;
		CurrentPersonCol = NextPersonCol;
	}
	else if (Map[NextPersonRow][NextPersonCol] == 'X')
	{
		int NextBoxRow = NextPersonRow;
		int NextBoxCol = NextPersonCol - 1;
		if (Map[NextBoxRow][NextBoxCol] == ' ' || Map[NextBoxRow][NextBoxCol] == 'O')
		{
			Map[NextBoxRow][NextBoxCol] = 'X';
			Map[NextPersonRow][NextPersonCol] = 'P';
			Map[CurrentPersonRow][CurrentPersonCol] = ' ';
			CurrentPersonRow = NextPersonRow;
			CurrentPersonCol = NextPersonCol;
		}
	}
}
void MoveToRight()
{
	int NextPersonRow = CurrentPersonRow;
	int NextPersonCol = CurrentPersonCol + 1;
	if (Map[NextPersonRow][NextPersonCol] == ' ')
	{
		Map[NextPersonRow][NextPersonCol] = 'P';
		Map[CurrentPersonRow][CurrentPersonCol] = ' ';
		CurrentPersonRow = NextPersonRow;
		CurrentPersonCol = NextPersonCol;
	}
	else if (Map[NextPersonRow][NextPersonCol] == 'O')
	{
		Map[NextPersonRow][NextPersonCol] = 'P';
		Map[CurrentPersonRow][CurrentPersonCol] = ' ';
		CurrentPersonRow = NextPersonRow;
		CurrentPersonCol = NextPersonCol;
	}
	else if (Map[NextPersonRow][NextPersonCol] == 'X')
	{
		int NextBoxRow = NextPersonRow;
		int NextBoxCol = NextPersonCol + 1;
		if (Map[NextBoxRow][NextBoxCol] == ' ' || Map[NextBoxRow][NextBoxCol] == 'O')
		{
			Map[NextBoxRow][NextBoxCol] = 'X';
			Map[NextPersonRow][NextPersonCol] = 'P';
			Map[CurrentPersonRow][CurrentPersonCol] = ' ';
			CurrentPersonRow = NextPersonRow;
			CurrentPersonCol = NextPersonCol;
		}
	}
}



