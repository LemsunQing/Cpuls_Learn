#include<graphics.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	float g = 0.5;//�������ٶ�
	float y = 20;//С��y���ʼλ��
	float x = 20;//С��X���ʼλ��
	float vx = 20;//С��ˮƽ���ٶ�
	float vy = 0;//С����ֱ���ٶ�
	initgraph(600,600);//��ʼ������
	while (1)
	{
		vy = vy + g;//ÿ��һ��sleep���ӵ��ٶ�
		y = y + vy;//��λʱ��ӵľ���
		if (y >= 580)
			vy = -0.95*vy;//��������
		if (y >= 580)
			y = 580;//���׾�ֹ��ֹԽ��
		x = x + vx;
		if (x >= 580 ||x <=0)
			vx = -0.95 * vx;
		cleardevice();//�����Ļ
		fillcircle(x,y,20);//ˢ��С��λ��
		Sleep(10);//��ʱ
	}
	_getch();
	closegraph();
	return 0;
}