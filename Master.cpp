#include <iostream>
using namespace std;//包含头文件时这两句一定要放在最上面，不然会出问题

#include <fstream>
#include <iomanip>
#include "friends.h"
#include "Master.h"
#include "Friend.h"


void Master::AddData(Friend& F)
{
	bool again(true);
	
	while(again)
	{
		cout<<"请输入姓名：";
		cin>>F.f[F.count].name;
		
		cout<<"请输入性别：";
		cin>>F.f[F.count].sex;

		cout<<"请输入年龄：";
		cin>>F.f[F.count].age;

		cout<<"请输入电话：";
		cin>>F.f[F.count].telephone;

		cout<<"请输入邮箱：";
		cin>>F.f[F.count].email;

		cout<<"请输入生日：";
		cin>>F.f[F.count].birthday;

//------------------------------------------输入部分

		F.count++;
			
		cout<<"是否继续输入？(1代表是，0代表否)";
		cin>>again;
		
	}

}

void Master::Display(Friend& F)
{
	int i(0);

	cout<<"序号"<<setw(10)<<"姓名"<<setw(10)<<"性别"<<setw(10)<<"年龄"<<setw(10)<<"电话"<<setw(10)<<"邮箱"<<setw(10)<<"生日"<<endl;

	for(i=0;i<F.count;i++)
	{
		cout<<i+1<<setw(10)<<F.f[i].name<<setw(10)<<F.f[i].sex<<setw(10)<<F.f[i].age<<setw(10)<<F.f[i].telephone<<setw(10)<<F.f[i].email<<setw(10)<<F.f[i].birthday<<endl;;
	}
}