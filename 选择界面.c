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

	
void setgame();
void setgamemusic();
void setgamemusic()
{
	initgraph(725, 625);
	IMAGE p;
	loadimage(&p, "./背景.jpeg", 725, 625);
	putimage(0, 0, &p);
	setbkmode(TRANSPARENT);//文字设置透明
	settextcolor(RGB(50, 73, 84));
	int song_x_y[Musicnum][2];//各个位文字坐标 
	char song_name[Musicnum][20] = { "歌曲1","歌曲2","歌曲3","歌曲4","歌曲5","歌曲6","歌曲7","歌曲8","歌曲9"};//各个歌曲名字
	for (int i = 0; i < Musicnum; i++)
	{
		song_x_y[i][0] = (i / 3 * 200) + 50; // x坐标
		song_x_y[i][1] = (i % 3 * 130) + 50 ;//y坐标
		outtextxy(song_x_y[i][0] + 50, song_x_y[i][1] + 50, song_name[i]);
	}
	outtextxy(30, 540, "返回上一界面");
	outtextxy(600, 540, "返回主界面");
	//输出文字
	while (1)//此处用死循环只是为了测试---->代码整合请去掉
	{
		if (MouseHit())
		{
			MOUSEMSG msg;
			msg = GetMouseMsg();
			switch (msg.uMsg)
			{
			case WM_LBUTTONDOWN:
				if (msg.mkLButton && msg.x > 25 && msg.x < 135 && msg.y> 495 && msg.y < 605)
				{
					setgame();//返回游戏设置界面
				}
				else if (msg.mkLButton && msg.x > 590 && msg.x < 700 && msg.y> 495 && msg.y < 605)
				{
					//直接返回主菜单界面
				}
				else if (msg.x > 50 && msg.x < 200 && msg.y>50 && msg.y < 150) {
					//See You Again
					mciSendString("close      ./jcldct.mp3", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./9.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./2.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./3.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./4.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./5.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./6.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./7.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./8.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("open      ./1.wav", NULL, 0, NULL);//加载音乐
					mciSendString("play      ./1.wav", NULL, 0, NULL);//播放音乐
				}
				else if (msg.x > 50 && msg.x < 200 && msg.y>180 && msg.y < 280) {
					//His Theme
					mciSendString("close      ./jcldct.mp3", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./9.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./1.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./3.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./4.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./5.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./6.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./7.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./8.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("open ./2.wav", NULL, 0, NULL);//加载音乐
					mciSendString("play ./2.wav", NULL, 0, NULL);//播放音乐
				}
				else if (msg.x > 50 && msg.x < 200 && msg.y>310 && msg.y < 410) {
					//搁浅
					mciSendString("close      ./jcldct.mp3", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./9.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./1.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./2.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./4.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./5.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./6.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./7.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./8.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("open ./3.wav", NULL, 0, NULL);//加载音乐
					mciSendString("play ./3.wav", NULL, 0, NULL);//播放音乐
				}

				else if (msg.x > 250 && msg.x < 400 && msg.y>50 && msg.y < 150) {
					//Bad Apple
					mciSendString("close      ./jcldct.mp3", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./9.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./1.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./3.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./2.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./5.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./6.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./7.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./8.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("open ./4.wav", NULL, 0, NULL);//加载音乐
					mciSendString("play ./4.wav", NULL, 0, NULL);//播放音乐
				}
				else if (msg.x > 250 && msg.x < 400 && msg.y>180 && msg.y < 280) {
					//水星记
					mciSendString("close      ./jcldct.mp3", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./9.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./1.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./3.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./4.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./2.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./6.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./7.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./8.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("open ./5.wav", NULL, 0, NULL);//加载音乐
					mciSendString("play ./5.wav", NULL, 0, NULL);//播放音乐
				}
				else if (msg.x > 250 && msg.x < 400 && msg.y>310 && msg.y < 410) {
					//海底
					mciSendString("close      ./jcldct.mp3", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./9.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./1.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./3.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./4.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./5.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./2.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./7.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./8.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("open ./6.wav", NULL, 0, NULL);//加载音乐
					mciSendString("play ./6.wav", NULL, 0, NULL);//播放音乐
				}
				else if (msg.x > 450 && msg.x < 600 && msg.y>50 && msg.y < 150) {
					mciSendString("close      ./jcldct.mp3", NULL, 0, NULL);//关闭音乐
					//吻得太逼真
					mciSendString("close      ./9.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./1.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./3.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./4.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./5.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./6.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./2.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./8.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("open ./7.wav", NULL, 0, NULL);//加载音乐

					mciSendString("play ./7.wav", NULL, 0, NULL);//播放音乐
				}
				else if (msg.x > 450 && msg.x < 600 && msg.y>180 && msg.y < 280) {
					//歌曲8
					mciSendString("close      ./jcldct.mp3", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./9.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./1.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./3.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./4.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./5.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./6.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./7.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./2.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("open ./8.wav", NULL, 0, NULL);//加载音乐
					mciSendString("play ./8.wav", NULL, 0, NULL);//播放音乐
				}
				else if (msg.x > 450 && msg.x < 600 && msg.y>310 && msg.y < 410) {
					//歌曲9
					mciSendString("close      ./jcldct.mp3", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./2.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./1.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./3.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./4.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./5.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./6.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./7.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("close      ./8.wav", NULL, 0, NULL);//关闭音乐
					mciSendString("open ./9.wav", NULL, 0, NULL);//加载音乐
					mciSendString("play ./9.wav", NULL, 0, NULL);//播放音乐
				}
			}
		}
	}
}
void setgame()
{
	initgraph(725, 625);
	IMAGE p;
	loadimage(&p, "./背景.jpeg", 725, 625);
	putimage(0, 0, &p);
	/*rectangle(240, 85, 480, 185); //不画矩形方块与圆形更好看
	rectangle(240, 215, 480, 315);
	rectangle(240, 355, 480, 455);
	circle(80, 550, 55);
	circle(645, 550, 55);*/
	textwidth(TextHight);
	textheight(TextHight);
	settextcolor(RGB(50, 73, 84));
	setbkmode(TRANSPARENT);//文字设置透明
	outtextxy(240 + 70, 85 + 40,"游戏音乐设置");
	outtextxy(240 + 60, 215 + 40, "吃吃模式食物设置");
	outtextxy(240 + 60, 355 + 40, "涂色模式颜色设置");
	outtextxy(30, 540, "返回上一界面");
	outtextxy(600, 540, "进入下一界面");
	while (1)//此处用死循环只是为了测试---->代码整合请去掉
	{
		if (MouseHit())
		{
			MOUSEMSG msg;
			msg = GetMouseMsg();
			switch (msg.uMsg)
			{
			case WM_LBUTTONDOWN:
				if (msg.mkLButton && msg.x > 240 && msg.x < 480 && msg.y>85 && msg.y < 185)
				{
					setgamemusic();//进入音乐选择界面
				}
				else if (msg.mkLButton && msg.x > 240 && msg.x < 480 && msg.y>215 && msg.y < 315)
				{
					//吃吃模式食物设置-->提示暂未开放
					printf("\a");
					HWND head = GetHWnd();
					SetWindowText(head, "游戏设置界面");
					MessageBox(head, "暂未开放", "提示", MB_OK);
				}
				else if (msg.mkLButton && msg.x > 240 && msg.x < 480 && msg.y>355 && msg.y < 455)
				{
					//涂色模式颜色设置-->提示暂未开放
					printf("\a");
					HWND head = GetHWnd();
					SetWindowText(head, "游戏设置界面");
					MessageBox(head, "暂未开放", "提示", MB_OK);
				}
				else if (msg.mkLButton && msg.x > 25 && msg.x < 135 && msg.y> 495 && msg.y < 605)
				{
					//放如返回上一界面函数 此处写个提示
					HWND head = GetHWnd();
					SetWindowText(head, "游戏设置界面");
					MessageBox(head, "上一界面", "我是上一界面", MB_OK);
				}
				else if (msg.mkLButton && msg.x > 590 && msg.x < 700 && msg.y> 495 && msg.y < 605)
				{
					//此处开个玩笑
					printf("\a");
					HWND head = GetHWnd();
					SetWindowText(head, "游戏设置界面");
					MessageBox(head, "啥也没有", "你应该看看其他按钮", MB_OK);
				}
			}
		}
	}
	getchar();
}
int main(void)
{
	setgame();
}

}
