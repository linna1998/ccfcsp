////201609-5
//// 60%
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//class node
//{
//public:
//	int id;
//	vector<int> list;
//	node(int inid = 0)
//	{
//		id = inid;
//	}
//	bool operator < (node b)
//	{
//		return list.size() > b.list.size();
//	}
//};
//vector<node> Col, Row;
////把(x,y)这个点插入体系中
//void Insert(int x, int y)
//{
//	int colsize = Col.size();
//	bool findcol = false;
//	for (int i = 0; i < colsize; i++)
//	{
//		if (Col[i].id == x)
//		{
//			Col[i].list.push_back(y);			
//			findcol = true;
//			break;
//		}
//	}
//	if (!findcol)
//	{
//		node new_node(x);
//		new_node.list.push_back(y);
//		Col.push_back(new_node);
//	}	
//
//	int rowsize = Row.size();
//	bool findrow = false;
//	for (int i = 0; i < rowsize; i++)
//	{
//		if (Row[i].id == y)
//		{
//			Row[i].list.push_back(x);			
//			findrow = true;
//			break;
//		}
//	}
//	if (!findrow)
//	{
//		node new_node(y);
//		new_node.list.push_back(x);
//		Row.push_back(new_node);
//	}	
//}
////找出vector<int>中比mid小的数的个数，用二分
//int findLower(vector<int> list, int mid)
//{
//	sort(list.begin(), list.end());
//	vector<int>::iterator it=find(list.begin(),list.end(),mid);
//	if (it != list.end()) return -1;
//}
////Col[colid]和Row[rowid]能够产生几层
//int Search(int colid, int rowid)
//{
//	int x = Col[colid].id, y = Row[rowid].id;	
//	int resultrow = 0, resultcol = 0;
//
//	/*
//	int findCol = findLower(Col[colid].list, y);
//	if (findCol == -1) return 0;
//	resultcol = min(findCol, (int)Col[colid].list.size() - findCol);
//	*/
//
//	int colsize = Col[colid].list.size();
//	int rowsize = Row[rowid].list.size();
//	int belowy = 0, abovey = 0, belowx = 0, abovex = 0;
//	for (int i = 0; i < colsize; i++)
//	{
//		if (Col[colid].list[i] == y) return 0;
//		if (Col[colid].list[i] < y) belowy++;
//		if (Col[colid].list[i] > y) abovey++;
//	}	
//	for (int i = 0; i < rowsize; i++)
//	{
//		if (Row[rowid].list[i] == x) return 0;
//		if (Row[rowid].list[i] < x) belowx++;
//		if (Row[rowid].list[i] > x) abovex++;
//	}
//	resultrow = min(belowx, abovex);
//	resultcol = min(belowy, abovey);
//	return min(resultrow, resultcol);
//}
//int main()
//{
//	int n = 0, q = 0;
//	int x = 0, y = 0;
//	int result = 0, tempresult = 0, resultnum = 0;
//	cin >> n >> q;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> x >> y;
//		Insert(x, y);
//	}
//	sort(Col.begin(), Col.end());
//	sort(Row.begin(), Row.end());
//	//找最大的层数
//	for (int i = 0; i < Col.size(); i++)
//	{
//		for (int j = 0; j < Row.size(); j++)
//		{
//			if ((Col[i].list.size() >= 2 * result) && (Row[j].list.size() >= 2 * result))
//			{
//				tempresult = Search(i, j);
//				if (tempresult > result)
//				{
//					result = tempresult;
//					resultnum = 1;
//				}
//				else if (tempresult == result)
//				{
//					resultnum++;
//				}
//			}
//		}
//	}
//	if (q == 1) cout << result << endl;
//	else if (q == 2) cout << resultnum << endl;
//	return 0;
//}