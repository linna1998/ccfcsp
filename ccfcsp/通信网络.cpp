////// 先是我的 TLE 版本
////// 下面是网上的一个能过的解~
////#include <iostream>
////#include <stdio.h>
////#include <vector>
////#include <algorithm>
////using namespace std;
////int dist[1010][1010] = { 0 };
////struct node
////{
////	vector<int> inlist;
////	vector<int> outlist;
////};
////int main()
////{
////	int N = 0, M = 0;
////	int a = 0, b = 0;
////	int result = 0;
////	int temp = 0;
////
////	cin >> N >> M;
////	node nodelist[1010];
////	for (int i = 1; i <= N; i++)
////	{
////		for (int j = 1; j <= N; j++)
////		{
////			dist[i][j] = -1;
////		}
////		dist[i][i] = 1;
////	}
////	for (int i = 0; i < M; i++)
////	{
////		// scanf("%d%d", &a, &b);
////		cin >> a >> b;
////		nodelist[a].outlist.push_back(b);
////		nodelist[b].inlist.push_back(a);
////		dist[a][b] = 1;
////	}
////	for (int k = 1; k <= N; k++)
////	{
////		for (int i = 1; i <= nodelist[k].inlist.size(); i++)////每次求中间点标号不超过k的i到j最短路
////		{
////			for (int j = 1; j <= nodelist[k].outlist.size(); j++)
////			{
////				int index1 = nodelist[k].inlist[i - 1];
////				int index2 = nodelist[k].outlist[j - 1];
////				vector<int>::iterator it;
////				it = find(nodelist[index1].outlist.begin(), nodelist[index1].outlist.end(), index2);
////				if (it == nodelist[index1].outlist.end())
////				{
////					nodelist[index1].outlist.push_back(index2);
////					nodelist[index2].inlist.push_back(index1);
////				}
////			}
////		}
////	}
////	result = 0;
////	for (int i = 1; i <= N; i++)
////	{
////		temp = 0;
////		for (int j = 1; j <= N; j++)
////		{
////			vector<int>::iterator it1, it2;
////			it1 = find(nodelist[i].outlist.begin(), nodelist[i].outlist.end(), j);
////			it2 = find(nodelist[i].inlist.begin(), nodelist[i].inlist.end(), j);
////			if (it1 != nodelist[i].outlist.end() || it2 != nodelist[i].inlist.end()) temp++;
////		}
////		if (temp >= N - 1) result++;
////	}
////	/*
////	for (int k = 1; k <= N; k++)
////	{
////		for (int i = 1; i <= N; i++)////每次求中间点标号不超过k的i到j最短路
////		{
////			for (int j = 1; j <= N; j++)
////			{
////				if (dist[i][k] > 0 && dist[k][j] > 0)
////					dist[i][j] = 1;
////			}
////		}
////	}
////	for (int i = 1; i <= N; i++)
////	{
////		temp = 0;
////		for (int j = 1; j <= N; j++)
////		{
////			if (dist[i][j] > 0 || dist[j][i] > 0) temp++;
////		}
////		if (temp == N) result++;
////	}
////	*/
////	printf("%d", result);
////	return 0;
////}
////
//// http://blog.csdn.net/zyy_1998/article/details/78334496
//// 暴力搜图
//// 遍历n个点（发现n才1000。。。），每次都将此时的节点当做起点，
//// 然后开始查询通过此点能到达的所有点。
//#include <stdio.h>
//#include <iostream>
//#include <algorithm>
//#include <string.h>
//#include <vector>
//using namespace std;
//int flag[1005][1005];
//int vis[1005];
//vector<int> V[1005];
//
//void dfs(int a, int t)
//{
//	vis[a] = 1;
//	flag[a][t] = 1;
//	flag[t][a] = 1;
//	for (int i = 0; i < V[a].size(); i++)
//	{
//		if (!vis[V[a][i]])
//		{
//			dfs(V[a][i], t); // 已经遍历过的点就不要再遍历了
//		}
//	}
//	return;
//}
//
//int main()
//{
//	int N = 0, M = 0;
//	cin >> N >> M;
//	memset(flag, 0, sizeof(flag));
//	for (int i = 0; i <= N; i++)
//	{
//		V[i].clear();
//	}
//	int a, b;
//	for (int i = 1; i <= M; i++)
//	{
//		cin >> a >> b;
//		V[a].push_back(b);
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		memset(vis, 0, sizeof(vis));
//		dfs(i, i);
//	}
//	int ans = 0, j = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		for (j = 1; j <= N; j++)
//		{
//			if (!flag[i][j] || !flag[j][i]) break;
//		}
//		if (j == N + 1) ans++;
//	}
//	cout << ans << endl;
//	return 0;
//}
