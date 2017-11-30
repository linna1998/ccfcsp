//// 不会写QAQ
////最小的样例都不会写QAQ
////暴力都不会写QAQ
//
////201609-4
//#include <iostream>
//#include <algorithm>
//using namespace std;
//#define INF 0x3fffffff
////从所有城市乘坐高速铁路到首都的最短路程和原来一样长
////把所有城市到首都的最短路改成高铁，改的最短路径
//
//int n = 0, m = 0;
//int dis[10010][10010] = { 0 };
//int disafter[10010][10010] = { 0 };
//int dis2start[10010] = { 0 };
//bool inP[10010] = { 0 };
//int main()
//{
//	int a = 0, b = 0, c = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (i != j)
//			{
//				dis[i][j] = INF;
//				disafter[i][j] = -1;
//			}
//			else if (i == j)
//			{
//				dis[i][j] = 0;
//				disafter[i][j] = i;
//			}
//		}
//		if (i != 1) dis2start[i] = INF;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> a >> b >> c;
//		dis[a][b] = c;
//		dis[b][a] = c;
//		disafter[a][b] = b;
//		disafter[b][a] = a;
//	}
//	for (int k = 1; k <= n; k++)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				if (dis[i][k] != INF && dis[k][j] != INF)
//				{
//					dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
//					disafter[i][j] = k;// i->k, then find disafter[k][j]
//				}
//			}
//		}
//	}
//
//	for (int j = 2; j <= n; j++)
//	{
//		if (dis[1][j] > 0)
//		{
//
//		}
//	}
//}