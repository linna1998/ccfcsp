////201612-3
//// ������������ӵ�ϵͳ����ȥ��
////������վ���ܱ��ˣ��ܲ������
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
//	int level;  // level=-1 ��ʾû��Ȩ�޵ȼ�
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
//// ����һ���ַ���Ȩ�ޣ������
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
////һ���û�����һ��role����Ȩ�ޣ�����Ȩ��
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
//// ����һ��ѯ��
//void QueryAuth()
//{
//	string username;
//	cin >> username;
//	auth privilege = ReadAuth();
//	user finduser;
//	bool haveuser = false;
//	// �ж�ԭ����str�Ƿ���level
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
//		if (userlist[i].name == username)  // �ҵ��˶�Ӧ���û�
//		{
//			finduser = userlist[i];
//			haveuser = true;
//		}
//	}
//	if (!haveuser)  // û���ҵ��û�
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
//		//����Ҫ�������
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
//	// ��ԭ����Ȩ�����
//	cin >> P;
//	for (int i = 0; i < P; i++)
//	{
//		authlist.push_back(ReadAuth());
//	}
//
//	// ����ɫ��Ȩ����
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
//	//���û��Ľ�ɫ��
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
//	// ����ѯ��
//	cin >> Q;
//	for (int i = 0; i < Q; i++)
//	{
//		QueryAuth();
//	}
//	return 0;
//}