//#include <iostream>
//#include <vector>
//#include <queue>
//#include<functional>
//#include <algorithm>
//using namespace std;
//
//struct timenode
//{
//	priority_queue<int, vector<int>, greater<int> > returnlist;
//	queue<int> getlist;
//};
//int main()
//{
//	int N = 0, K = 0;
//	int keys[1010];
//	timenode timelist[10110];
//	int max_time = 0;
//	int temp_keyid, temp_start, temp_last;
//	priority_queue<int, vector<int>, greater<int> > emptyindex;
//	cin >> N >> K;
//	for (int i = 1; i <= N; i++)
//	{
//		keys[i] = i;
//	}
//	for (int i = 0; i < K; i++)
//	{
//		cin >> temp_keyid >> temp_start >> temp_last;
//		timelist[temp_start].getlist.push(temp_keyid);
//		timelist[temp_start + temp_last].returnlist.push(temp_keyid);
//		max_time = max(max_time, temp_start + temp_last);
//	}
//	for (int t = 0; t <= max_time; t++)
//	{
//		while (!timelist[t].returnlist.empty())
//		{
//			int top = timelist[t].returnlist.top();
//			timelist[t].returnlist.pop();
//			int index = emptyindex.top();
//			emptyindex.pop();
//			keys[index] = top;
//		}
//		while (!timelist[t].getlist.empty())
//		{
//			int top = timelist[t].getlist.front();
//			timelist[t].getlist.pop();
//			for (int i = 1; i <= N; i++)
//			{
//				if (keys[i] == top)
//				{
//					emptyindex.push(i);
//					keys[i] = -1;
//					break;
//				}
//			}
//		}
//	}
//
//	for (int i = 1; i <= N; i++)
//	{
//		cout << keys[i] << " ";
//	}
//	return 0;
//}