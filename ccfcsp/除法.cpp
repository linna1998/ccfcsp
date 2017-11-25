//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N = 0, M = 0;
//int innum[10010] = { 0 };
//struct node
//{
//	int l, r;
//	int sum;
//	bool valid;
//	vector<int> divlist;
//};
//node nodelist[40040];
//void Build(int l, int r, int id)
//{
//	nodelist[id].l = l;
//	nodelist[id].r = r;
//	nodelist[id].valid = true;
//	if (l == r)
//	{
//		nodelist[id].sum = innum[l];
//	}
//	else
//	{
//		int mid = (l + r) / 2;
//		Build(l, mid, 2 * id);
//		Build(mid + 1, r, 2 * id + 1);
//		nodelist[id].sum = nodelist[2 * id].sum + nodelist[2 * id + 1].sum;
//		nodelist[id].valid = true;
//	}
//}
//void Div(int l, int r, int v, int id)
//{
//	if (l == r && l == nodelist[id].l && r == nodelist[id].r)
//	{
//		if (nodelist[id].sum%v == 0) nodelist[id].sum /= v;
//	}
//	if (l == nodelist[id].l && r == nodelist[id].r)
//	{
//		nodelist[id].divlist.push_back(v);
//		nodelist[id].valid = false;
//	}
//	else
//	{
//		nodelist[id].valid = false;
//		int mid = (nodelist[id].l + nodelist[id].r) / 2;
//		if (mid < l) Div(l, r, v, id * 2 + 1);
//		else if (mid >= r) Div(l, r, v, id * 2);
//		else
//		{
//			Div(l, mid, v, id * 2);
//			Div(mid + 1, r, v, id * 2 + 1);
//		}
//	}
//}
//int CalSum(int l, int r, int id)
//{
//	int mid = (nodelist[id].l + nodelist[id].r) / 2;
//	if (l == nodelist[id].l && r == nodelist[id].r)
//	{
//		while (!nodelist[id].divlist.empty())
//		{
//			int divnum = nodelist[id].divlist.back();
//			nodelist[id].divlist.pop_back();
//			Div(l, mid, divnum, id * 2);
//			Div(mid + 1, r, divnum, id * 2 + 1);
//		}
//		if (l != r) nodelist[id].sum = CalSum(l, mid, id * 2) + CalSum(mid + 1, r, id * 2 + 1);
//		return nodelist[id].sum;
//	}
//	else
//	{
//		if (mid < l) return CalSum(l, r, id * 2 + 1);
//		else if (mid >= r) return CalSum(l, r, id * 2);
//		else return CalSum(l, mid, id * 2) + CalSum(mid + 1, r, id * 2 + 1);
//	}
//}
//int main()
//{
//	int opt, l, r, v;
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> innum[i];
//	}
//	Build(1, N, 1);
//	for (int i = 0; i < M; i++)
//	{
//		cin >> opt;
//		if (opt == 1)
//		{
//			cin >> l >> r >> v;
//			Div(l, r, v, 1);
//		}
//		else if (opt == 2)
//		{
//			cin >> l >> r;
//			cout << CalSum(l, r, 1) << endl;
//		}
//	}
//	return 0;
//}
//
//
