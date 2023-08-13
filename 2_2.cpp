#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	float g = 0.5;//重力加速度
	float y = 20;//小球y轴初始位置
	float x = 20;//小球X轴初始位置
	float vx = 20;//小球水平初速度
	float vy = 0;//小球竖直初速度
	initgraph(600,600);//初始化界面
	while (1)
	{
		vy = vy + g;//每过一个sleep所加的速度
		y = y + vy;//单位时间加的距离
		if (y >= 580)
			vy = -0.95*vy;//碰触减速
		if (y >= 580)
			y = 580;//触底静止防止越界
		x = x + vx;
		if (x >= 580 ||x <=0)
			vx = -0.95 * vx;
		cleardevice();//清楚屏幕
		fillcircle(x,y,20);//刷新小球位置
		Sleep(10);//延时
	}
	_getch();
	closegraph();
	return 0;
}