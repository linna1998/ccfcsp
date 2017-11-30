//201609-5
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class node
{
public:
	int id;
	// bool isCol;  // isCol=true表示是一行，否则是一列
	vector<int> list;
	node(int inid = 0)
	{
		id = inid;
	}
	bool operator < (node b)
	{
		return list.size() > b.list.size();
	}
};
vector<node> Col, Row;
//把(x,y)这个点插入体系中
void Insert(int x, int y)
{
	int colsize = Col.size();
	bool findcol = false;
	for (int i = 0; i < colsize; i++)
	{
		if (Col[i].id == x)
		{
			Col[i].list.push_back(y);
			sort(Col[i].list.begin(), Col[i].list.end());
			findcol = true;
			break;
		}
	}
	if (!findcol)
	{
		node new_node(x);
		new_node.list.push_back(y);
		Col.push_back(new_node);
	}
	sort(Col.begin(), Col.end());

	int rowsize = Row.size();
	bool findrow = false;
	for (int i = 0; i < rowsize; i++)
	{
		if (Row[i].id == x)
		{
			Row[i].list.push_back(y);
			sort(Row[i].list.begin(), Row[i].list.end());
			findrow = true;
			break;
		}
	}
	if (!findrow)
	{
		node new_node(x);
		new_node.list.push_back(y);
		Row.push_back(new_node);
	}
	sort(Row.begin(), Row.end());
}
//Col[i]和Row[j]能够产生几层
int Search(int i, int j)
{
	int x = Col[i].id, y = Row[j].id;

}
int main()
{

	int n = 0, q = 0;
	int x = 0, y = 0;
	cin >> n >> q;
	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		Insert(x, y);
	}
	//找最大的层数
	for (int i = 0; i < Col.size; i++)
	{
		for (int j = 0; j < Row.size; j++)
		{
			Search(i, j);
		}
	}

	return 0;

}