//// 90%
//#ifdef _MSC_VER
//#define _CRT_SECURE_NO_WARNINGS
//
//#include <iostream>
//#include <string>
//using namespace std;
//
//string Emphasize(string line)
//{
//	string out;
//	int _num = 0;
//	int size = line.size();
//	for (int i = 0; i < size; i++)
//	{
//		if (line[i] == '_')
//		{
//			if (_num % 2 == 0)
//			{
//				out += "<em>";
//			}
//			else out += "</em>";
//			_num++;
//		}
//		else
//		{
//			out += line[i];
//		}
//	}
//	return out;
//}
//
//string Link(string line)
//{
//	string out;
//	int size = line.size();
//	int textright = 0;
//	int linkleft = 0;
//	int linkright = 0;
//	for (int i = 0; i < size;)
//	{
//		if (line[i] != '[')
//		{
//			out += line[i];
//			i++;
//		}
//		else
//		{
//			textright = i;
//			while (line[textright] != ']') textright++;
//			string text = line.substr(i + 1, (textright - 1) - (i + 1) + 1);
//			linkleft = textright + 2;
//			linkright = linkleft;
//			while (line[linkright] != ')') linkright++;
//			string link = line.substr(linkleft, (linkright - 1) - linkleft + 1);
//			out += "<a href=\"";
//			out += link;
//			out += "\">";
//			out += text;
//			out += "</a>";
//			i = linkright + 1;
//		}		
//	}
//	return out;
//}
//
//int main()
//{
//	freopen("test markdown.txt", "r", stdin);
//	freopen("data.out", "w", stdout);
//
//	std::string line;
//	int insth=0; // 表示是否在某个块里面
//	int afterblank = 0;  // 表示上一行是否是空行
//	while (std::getline(std::cin, line))
//	{
//		if (line.size() == 0)
//		{
//			afterblank = 1;  // 空行		
//			continue;
//		}
//		else
//		{
//			int size = line.size();
//			int hnum = 0;
//			for (int i = 0; i < size; i++)
//			{
//				if (line[i] == '#') hnum++;
//			}
//			if (hnum > 0)  // 标题，一行
//			{
//				cout << "<h" << hnum << ">";
//				int start = hnum;
//				while (line[start] == ' ') start++;
//				line = line.substr(start, size - start);
//				line = Emphasize(line);
//				line = Link(line);
//				cout << line;				
//				cout << "</h" << hnum << ">" << endl;
//			}
//			else if (line[0] == '*')  // 无序列表
//			{
//				if (afterblank == 1) // 第一个的标签
//				{
//					cout << "<ul>" << endl;
//					insth = 1;
//				}
//				cout << "<li>";
//				int start = 1;
//				while (line[start] == ' ') start++;
//				line = line.substr(start, size - start);
//				line = Emphasize(line);
//				line = Link(line);
//				cout << line;				
//				cout << "</li>" << endl;
//				if (std::cin.peek() != '*')  // 最后一行的标签
//				{
//					cout << "</ul>" << endl;
//					insth = 0;
//				}
//			}
//			else
//			{
//				if (afterblank == 1 || insth == 0)
//				{
//					cout << "<p>";
//					insth = 1;
//				}
//				line = Emphasize(line);
//				line = Link(line);
//				cout << line;
//				if (cin.peek() == '\n' || cin.peek() == EOF)
//				{
//					cout << "</p>" << endl;
//					insth = 0;
//				}
//				else cout << endl;
//			}
//		}
//		afterblank = 0;
//	}
//	return 0;
//}
//
//#endif