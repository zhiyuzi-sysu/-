#include<iostream>
#include<graphics.h>
using namespace std;

//��ʼ����Ϸ
void initGame()
{
	initgraph(800, 600);
	rectangle(5, 5, 795, 595);
	outtextxy(400, 300, _T("��ʼ��Ϸ"));

}
int main()
{
	initGame();
	while (1)
	{

	}
	return 0;
}