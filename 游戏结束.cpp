void jieshu() {

	IMAGE img2;
	initgraph(449, 434);
	loadimage(&img2, "jieshu.jpg",449 ,434);//图片
	putimage(0, 0, &img2);

	
	settextcolor(RGB(20, 93, 137));
	settextstyle(40, 30, "");
	char a[40];
	sprintf(a, "%d", money1);
	outtextxy(220,105 , a);
	char b[40];
	sprintf(b, "%d",  money2);
	outtextxy(220,210 , b);//打印出两个角色的金币
	while (1)
	{
		if (MouseHit())//开始选择
		{
			MOUSEMSG msg2;
			msg2 = GetMouseMsg();
			switch (msg2.uMsg)
			{
			case WM_LBUTTONDOWN:
				if (msg2.mkLButton && msg2.x > 120 && msg2.x < 331 && msg2.y>304 && msg2.y < 367)
				{
					chushijiemian();//返回主页面
				}
				if (msg.mkLButton && msg.x > 377&& msg.x < 418 && msg.y>16 && msg.y < 68)
				{

					youxi();//游戏没统一命名，重新进行一次游戏

				}


			}
		}

	}

}
