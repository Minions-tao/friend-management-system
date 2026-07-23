#include <iostream>
using namespace std;//包含头文件时这两句一定要放在最上面，不然会出问题

#include <fstream>
#include "friends.h"
#include "Master.h"
#include "Friend.h"

Friend::Friend(char *g_n)
{
	char file_name[50];

	count=0;
	fstream f1,f_create;
	
	group_name=g_n;

	strcpy(file_name,g_n);
	strcat(file_name,".dat");

	f_create.open(file_name,ios::app|ios::binary);
	if(f_create.fail())
	{
		cout<<"file create error!"<<endl;
		exit(0);
	}
	f_create.close();


	f1.open(file_name,ios::in|ios::binary);

	if(f1.fail())
	{
		cout<<"file open error!"<<endl;
		exit(0);
	}

	while(!f1.eof())
	{
		f1.read((char*)(&f)[count],sizeof(friends) );
		count++;
	}
	count--;
	
	f1.close();


}

void Friend::WriteData()
{
	char file_name[50];
	int i(0);
	fstream f1;
	
	strcpy(file_name,group_name);
	strcat(file_name,".dat");

	f1.open(file_name,ios::out|ios::binary);

	if(f1.fail())
	{
		cout<<"file open error!"<<endl;
		exit(0);
	}

	for(i=0;i<count;i++)
	{
		f1.write((char*)(&f)[i],sizeof(friends) );
	}
	
	f1.close();

}