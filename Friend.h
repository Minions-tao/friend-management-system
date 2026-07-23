#ifndef _FRIEND_H
#define _FRIEND_H

class Friend
{
	private:
		struct friends f[21];
		int count;
		char *group_name;
	public:
		Friend(char*);
		void WriteData();
		friend class Master;

};

#endif