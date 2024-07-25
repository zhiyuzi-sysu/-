#include<iostream>
#include<graphics.h>
using namespace std;

//初始化游戏
void initGame()
{
	initgraph(800, 600);
	rectangle(5, 5, 795, 595);
	outtextxy(400, 300, _T("开始游戏"));

}
int main()
{
	initGame();
	while (1)
	{

	}
	return 0;
}