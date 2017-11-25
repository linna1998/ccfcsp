//// TODO
//// TLE
//#include <iostream>
//#include <stdio.h>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int dist[1010][1010] = { 0 };
//struct node
//{
//	vector<int> inlist;
//	vector<int> outlist;
//};
//int main()
//{
//	int N = 0, M = 0;
//	int a = 0, b = 0;
//	int result = 0;
//	int temp = 0;
//
//	cin >> N >> M;
//	node nodelist[1010];
//	for (int i = 1; i <= N; i++)
//	{
//		for (int j = 1; j <= N; j++)
//		{
//			dist[i][j] = -1;
//		}
//		dist[i][i] = 1;
//	}
//	for (int i = 0; i < M; i++)
//	{
//		// scanf("%d%d", &a, &b);
//		cin >> a >> b;
//		nodelist[a].outlist.push_back(b);
//		nodelist[b].inlist.push_back(a);
//		dist[a][b] = 1;
//	}
//	for (int k = 1; k <= N; k++)
//	{
//		for (int i = 1; i <= nodelist[k].inlist.size(); i++)////每次求中间点标号不超过k的i到j最短路
//		{
//			for (int j = 1; j <= nodelist[k].outlist.size(); j++)
//			{
//				int index1 = nodelist[k].inlist[i - 1];
//				int index2 = nodelist[k].outlist[j - 1];
//				vector<int>::iterator it;
//				it = find(nodelist[index1].outlist.begin(), nodelist[index1].outlist.end(), index2);
//				if (it == nodelist[index1].outlist.end())
//				{
//					nodelist[index1].outlist.push_back(index2);
//					nodelist[index2].inlist.push_back(index1);
//				}
//			}
//		}
//	}
//	result = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		temp = 0;
//		for (int j = 1; j <= N; j++)
//		{
//			vector<int>::iterator it1, it2;
//			it1 = find(nodelist[i].outlist.begin(), nodelist[i].outlist.end(), j);
//			it2 = find(nodelist[i].inlist.begin(), nodelist[i].inlist.end(), j);
//			if (it1 != nodelist[i].outlist.end() || it2 != nodelist[i].inlist.end()) temp++;
//		}
//		if (temp >= N - 1) result++;
//	}
//	/*
//	for (int k = 1; k <= N; k++)
//	{
//		for (int i = 1; i <= N; i++)////每次求中间点标号不超过k的i到j最短路
//		{
//			for (int j = 1; j <= N; j++)
//			{
//				if (dist[i][k] > 0 && dist[k][j] > 0)
//					dist[i][j] = 1;
//			}
//		}
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		temp = 0;
//		for (int j = 1; j <= N; j++)
//		{
//			if (dist[i][j] > 0 || dist[j][i] > 0) temp++;
//		}
//		if (temp == N) result++;
//	}
//	*/
//	printf("%d", result);
//	return 0;
//}