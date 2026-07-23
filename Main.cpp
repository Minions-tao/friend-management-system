#include <iostream>
using namespace std;

#include "friends.h"
#include "Friend.h"
#include "Master.h"




void main()
{
	char mode,group;
	Master M;
	Friend g1("g1"),g2("g2");

	while(true)
	{
		cout<<"请选择你的登录类型："<<endl;
		cout<<"a.作为主人登录"<<endl;
		cout<<"b.作为游客登录"<<endl;
		cin>>mode;

		if(mode=='a')
		{
			break;
		}
		else if(mode=='b')
		{
			cout<<"暂无游客功能，请待程序更新，谢谢！";
			getchar();
			getchar();
			return;
		}
		else
		{
			cout<<"输入错误,请重新输入！"<<endl;
			getchar();
		}	
	}

//-----------------------------------------------------登录部分（correct!）

	while(true)
	{
		cout<<"请选择你要使用的功能："<<endl;
		cout<<"a.添加功能"<<endl;
		cout<<"b.删除功能"<<endl;
		cout<<"c.修改功能"<<endl;
		cout<<"d.显示功能"<<endl;
		cout<<"e.退出程序"<<endl;
		cin>>mode;

		if(mode=='a')
		{
			cout<<"请输入此人将要加入的分组(1 or 2)：";
			cin>>group;

			switch(group)
			{
				case '1':
					M.AddData(g1);
					g1.WriteData();
					break;
				case '2':
					M.AddData(g2);
					g2.WriteData();
					break;
				default:
					cout<<"输入错误！";
			}

		}

		else if(mode=='b')
		{
			
		}

		else if(mode=='c')
		{
			
		}

		else if(mode=='d')
		{
			cout<<"请输入想要显示的分组：";
			cin>>group;

			switch(group)
			{
				case '1':
					M.Display(g1);
					break;
				case '2':
					M.Display(g2);
					break;
				default:
					cout<<"输入错误！";
			}
		}

		else if(mode=='e')
		{
			cout<<"感谢您的使用！"<<endl;
			exit(0);
		}
		else
		{
			cout<<"输入错误,请重新输入！"<<endl;
			getchar();
		}	
	}

//-----------------------------------------------------主人功能实现部分


	getchar();
	getchar();
}