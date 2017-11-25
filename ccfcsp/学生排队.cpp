//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n = 0, m = 0;
//	int id[1010] = { 0 };
//	int p = 0, q = 0, pindex=0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		id[i] = i;
//	cin >> m;
//	for (int i = 0; i < m; i++)
//	{
//		cin >> p >> q;
//		for (int j = 1; j <= n; j++)
//		{
//			if (id[j] == p)
//			{
//				pindex = j;
//				break;
//			}
//		}
//		if (q > 0)
//		{
//			for (int j = 0; j < q; j++)
//			{
//				id[pindex + j] = id[pindex + j + 1];
//			}
//			id[pindex + q] = p;
//		}
//		else if (q < 0)
//		{
//			q = -q;
//			for (int j = 0; j < q; j++)
//			{
//				id[pindex - j] = id[pindex - j - 1];
//			}
//			id[pindex - q] = p;
//		}
//
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << id[i] << " ";
//	}
//	cout << endl;
//	return 0;
//}