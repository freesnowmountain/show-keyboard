#include"架构.h"
#pragma once
//全局变量：炸弹数zhadanshu1,zhadanshu2，箱子位置xiangziweizhi，人物位置renwuweizhi
//renwuweizhi2.道具位置daojuweizhi.炸弹冷却cd1，cd2,货币money.角色图片1picture1，角色图片2。picture2
//cd等级cdrank,爆炸范围等级spacerank。货币money1,money2

void chushi() {
	//打印界面开始游戏，游戏设置，商店，退出，游戏说明
	//变量:无
	/*
	输入：点击四个不同按钮
	输出：进入不同界面，打印背景图
	*/
	IMAGE picture;
	initgraph(800, 600);
	loadimage(&picture, L"初始界面.jpg", 800, 600);
	putimage(0, 0, &picture);
	MOUSEMSG m;
	while (1)
	{
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)
		{
			if (m.x < 310 && m.y < 360&&m.x>150&&m.y>200)
			{
				xuanze();
			}
			else if (m.x > 460 &&m.x<600 &&m.y < 400&&m.y>200)
			{

				shuoming();
			}
			else if (m.x>150&&m.x < 310 && m.y > 400 && m.y < 520)
			{

				shezhi();
			}
			else if (m.x > 450 && m.y > 330 &&m.x<600 &&m.y<520)
			{

				shandian();
			}

		}
	}
	_getch();
	

	return 0;
}
}
void shezhi() {
	/*
	功能：控制背景音乐，播放音乐，返回上一界面（拓展：吃吃模式，涂色模式食物设置）
	输入：点击控制音乐
	输出：音乐被控制
	*/
}
void shandian() {
	/*
	功能：根据货币购买，可以购买属性不同的角色，返回上一界面，判断金币是否足够（不够出弹窗）
	输出角色的图像，接受属性。上方给提示角色1先选，角色1选完后角色2选。有两个不同的初始角色
	返回上一级

	变量：货币，角色的属性：爆炸冷却(全局变量），角色图片
	输入：点击角色完成购买（先判断1，1判断完之后判断2）
	输出：购买成功（或金币不够）
	*/
}
void shuoming() {
	/*
	功能：介绍玩法，返回上一界面
	输出：给一段文字介绍：第一名角色wasd控制方向，空格放炸弹，触碰到道具则捡到
	第二名角色方向键控制角色，回车键放炸弹，模式介绍，道具功能
	*/
	IMAGE picture3;
	initgraph(800, 600);
	loadimage(&picture3, L"游戏说明.jpg", 800, 600);
	putimage(0, 0, &picture3);
	outtextxy(int x, int y, text);
	MOUSEMSG m;
	while (1)
	{
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)
		{
			
			if (m.x > 280 && m.y < 540 && m.x < 510 && m.y>445)
			{
				chushi();
			}

		}
	}
	_getch();

}
void tuichu() {
	//退出游戏
}

