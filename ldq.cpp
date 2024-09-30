#include<bits/stdc++.h>
#include<windows.h>
#define KEY_DOWN(VK_NONAME)((GetAsyncKeyState(VK_NONAME)&0x8000)?1:0)
using namespace std;
int main()
{
	int itval;
	cout<<"------introduce area------"<<"\n";
	cout<<"instruction:"<<"\n";
	cout<<"SPACE--start"<<"\n"<<"SHIFT--pause"<<"\n"<<"ESCAPE--Emergency Termination Process"<<"\n";
	cout<<"------input area------"<<"\n"<<"time interval(unit:ms):";
	cin>>itval;
	Sleep(3000);
	cout<<"------output area------"<<"\n"<<"BEGIN"<<"\n"<<"\n";
	while(1)
	{
		if(KEY_DOWN(VK_SPACE))
		{
			int n=0;
			n++;
			if(n==1)
			cout<<"start"<<"\n"<<"\n";
			while(1)
			{
				mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0); 
				mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
				Sleep(itval);
				if(KEY_DOWN(VK_SHIFT))
				{
					cout<<"pause"<<"\n"<<"\n";
					break;
				}
			}
			if(KEY_DOWN(VK_ESCAPE))
			{
				cout<<"Emergency Termination Process"<<"\n"<<"\n";
				return 0;
			}
		}
		if(KEY_DOWN(VK_ESCAPE))
		{
			cout<<"Emergency Termination Process"<<"\n"<<"\n";
			return 0;
		}
	}
	return 0;
}
/*
  食用指南
  程序运行即启动，上面的Sleep函数不是故意拖时间救命~ 是留出时间给电脑反应的吧
  反正去掉了我这里出现了神奇的bug T^T
  ------------------------------------------------------------------------------
  首先输入一个点击间隔（整数，单位：毫秒（注：1000毫秒=1秒）），范围[0,2147483647)
  然后按空格键开始连点，SHIFT键暂停
  如果被点的乱乱的，找不到界面关掉了，宝宝还可以有以下两种办法：
	  1.点击ESCAPE键，是紧急暂停按钮，不好用多点几下
	  2.关机重启
 */
