#pragma once
void xuanze()
{

	//功能；打印选择界面   单人模式（弹窗显示开发中）  双人模式 
	//输入；鼠标点击
IMAGE picture2;
	initgraph(800, 600);
	loadimage(&picture2, L"模式选择.jpg", 800, 600);
	putimage(0, 0, &picture2);
	MOUSEMSG m;
	while (1)
	{
		m = GetMouseMsg();
		if (m.uMsg == WM_LBUTTONDOWN)
		{
			if (m.x > 280 && m.y < 270 && m.x<510 && m.y>175)
			{
				moshixuanze();
			}
			else if (m.x > 280 && m.y < 405 && m.x < 510 && m.y>310)
			{
				moshixuanze();
	
			}
			else if (m.x > 280 && m.y < 540 && m.x < 510 && m.y>445)
			{
				chushi();
			}

		}
	}
	_getch();

}
void moshixuanze()
{

	//功能；选择模式    双人对战 涂色模式 吃吃模式 （弹窗显示开发中）
	//输入；鼠标选择地图


}
