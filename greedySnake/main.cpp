#include<iostream>
#include<graphics.h>
#include"snake.h"
#include "conio.h"
#include "Food.h"
using namespace std;

//��ʼ����Ϸ
void sTartGame()
{
	initgraph(800, 600);
	rectangle(5, 5, 795, 595);
	settextstyle(80, 0, _T("����"));
	outtextxy(275, 210, _T("̰����"));
	settextstyle(30, 0, _T("����"));
	outtextxy(285, 400, _T("�����������ʼ"));
}

void iNitGame()
{
	cleardevice();
	rectangle(5, 5, 795, 595);
	settextstyle(20, 0, _T("����"));
	outtextxy(20, 12, _T("�Ѷ�"));
	outtextxy(220, 12, _T("�߳�"));
	outtextxy(420, 12, _T("��"));
	outtextxy(620, 12, _T("����"));
	line(5, 40, 795, 40);
}

int main()
{
	sTartGame();
	if (_getch())
	{
		iNitGame();
		while (1)
		{
			snake NewSnake;
			int speed = 1;
			while (1)
			{
				circle(20 + speed, 60, 5);
				fillcircle(30 + speed, 60, 5);
				speed++;
				Sleep(2);
			}
		}
	}
	return 0;
}