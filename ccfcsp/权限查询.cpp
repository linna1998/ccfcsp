//201612-3
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class auth
{
public:
	string str;
	int level;  // level=-1 表示没有权限等级
	auth(string instr = "", int inlevel = -1)
	{
		str = instr;
		level = inlevel;
	}
};
int main()
{
	int P;
	cin >> P;
	string instr;
	int strsize = 0;
	vector<auth> authlist;
	for (int i = 0; i < P; i++)
	{
		cin >> instr;
		strsize = instr.size();
		auth new_auth(instr);
		for (int j = 0; j < strsize; j++)
		{
			if (instr[j] == ':')
			{
				new_auth.str = instr.substr(0, j - 1);
				new_auth.level = instr[j + 1] - '0';
				break;
			}
		}
	}

	return 0;
}