////201612-3
//// 解决了样例，扔到系统上面去跑
////但是网站可能崩了，跑不出结果
//#include <algorithm>
//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//class auth
//{
//public:
//	string str;
//	int level;  // level=-1 表示没有权限等级
//	auth(string instr = "", int inlevel = -1)
//	{
//		str = instr;
//		level = inlevel;
//	}
//};
//vector<auth> authlist;
//class role
//{
//public:
//	string name;
//	int authnum;
//	vector<auth> authlist;
//};
//vector<role> rolelist;
//class user
//{
//public:
//	string name;
//	int rolenum;
//	vector<auth> authlist;
//};
//vector<user> userlist;
//// 读入一个字符串权限，并拆解
//auth ReadAuth()
//{
//	string str;
//	cin >> str;
//	int strsize = str.length();
//	auth new_auth(str);
//	for (int j = 0; j < strsize; j++)
//	{
//		if (str[j] == ':')
//		{
//			new_auth.str = str.substr(0, j);
//			new_auth.level = str[j + 1] - '0';
//			break;
//		}
//	}
//	return new_auth;
//}
////一个用户读入一个role，有权限，处理权限
//void AddAuth(user &new_user)
//{
//	string rolename;
//	cin >> rolename;
//	for (int i = 0; i < rolelist.size(); i++)
//	{
//		if (rolelist[i].name == rolename)
//		{
//			for (int j = 0; j < rolelist[i].authnum; j++)
//				new_user.authlist.push_back(rolelist[i].authlist[j]);
//			break;
//		}
//	}
//}
//// 处理一行询问
//void QueryAuth()
//{
//	string username;
//	cin >> username;
//	auth privilege = ReadAuth();
//	user finduser;
//	bool haveuser = false;
//	// 判断原来的str是否有level
//	bool havelevel = false;
//	for (int i = 0; i < authlist.size(); i++)
//	{
//		if (authlist[i].str == privilege.str)
//		{
//			if (authlist[i].level == -1) havelevel = false;
//			else havelevel = true;
//		}
//	}
//
//	for (int i = 0; i < userlist.size(); i++)
//	{
//		if (userlist[i].name == username)  // 找到了对应的用户
//		{
//			finduser = userlist[i];
//			haveuser = true;
//		}
//	}
//	if (!haveuser)  // 没有找到用户
//	{
//		cout << "false" << endl;
//		return;
//	}
//
//	if (havelevel == false)
//	{
//		for (int j = 0; j < finduser.authlist.size(); j++)
//		{
//			if (finduser.authlist[j].str == privilege.str)
//			{
//				cout << "true" << endl;
//				return;
//			}
//		}
//	}
//	else if (havelevel == true)
//	{
//		int userlevel = -1;
//		for (int j = 0; j < finduser.authlist.size(); j++)
//		{
//			if (finduser.authlist[j].str == privilege.str)
//			{
//				userlevel = max(userlevel, finduser.authlist[j].level);
//			}
//		}
//		//可能要输出数字
//		if (privilege.level == -1)
//		{
//			if (userlevel >= 1)
//			{
//				cout << userlevel << endl;
//				return;
//			}
//			else
//			{
//				cout << "false" << endl;
//				return;
//			}
//		}
//		else
//		{
//			if (privilege.level <= userlevel)
//			{
//				cout << "true" << endl;
//				return;
//			}
//			else
//			{
//				cout << "false" << endl;
//				return;
//			}
//		}
//	}
//	cout << "false" << endl;
//	return;
//}
//int main()
//{
//	int P, R, U, Q;
//
//	// 读原来的权限类别
//	cin >> P;
//	for (int i = 0; i < P; i++)
//	{
//		authlist.push_back(ReadAuth());
//	}
//
//	// 读角色的权限们
//	cin >> R;
//	for (int i = 0; i < R; i++)
//	{
//		role new_role;
//		cin >> new_role.name;
//		cin >> new_role.authnum;
//		for (int j = 0; j < new_role.authnum; j++)
//		{
//			new_role.authlist.push_back(ReadAuth());
//		}
//		rolelist.push_back(new_role);
//	}
//
//	//读用户的角色们
//	cin >> U;
//	for (int i = 0; i < U; i++)
//	{
//		user new_user;
//		string rolename;
//		cin >> new_user.name;
//		cin >> new_user.rolenum;
//		for (int j = 0; j < new_user.rolenum; j++)
//		{
//			AddAuth(new_user);
//		}
//		userlist.push_back(new_user);
//	}
//
//	// 处理询问
//	cin >> Q;
//	for (int i = 0; i < Q; i++)
//	{
//		QueryAuth();
//	}
//	return 0;
//}