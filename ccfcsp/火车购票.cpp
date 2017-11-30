//// 201609-2
//// Waiting to be checked.
//#include <iostream>
//#include <vector>
//using namespace std;
//
//bool filled[20][5] = { 0 };
//void buy(int num)
//{
//	//处理在同一排相邻座位的情况
//	for (int i = 0; i < 20; i++)
//	{
//		for (int j = 0; j <= 5 - num; j++)
//		{
//			bool canbuy = true;
//			for (int k = 0; k < num; k++)
//			{
//				if (filled[i][j + k] == true) canbuy = false;
//			}
//			if (canbuy)
//			{
//				filled[i][j] = true;
//				cout << i * 5 + j + 1;
//				for (int k = 1; k < num; k++)
//				{
//					filled[i][j + k] = true;
//					cout << " " << i * 5 + j + k + 1;
//				}
//				cout << endl;
//				return;
//			}
//		}
//	}
//	//直接挑若干个座位
//	vector<int> result;
//	for (int i = 0; i < 20; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			if (filled[i][j] == false && result.size() < num)
//			{
//				filled[i][j] = true;
//				result.push_back(i * 5 + j + 1);
//			}
//		}
//	}
//	cout << result[0];
//	for (int k = 1; k < num; k++)
//	{
//		cout << " " << result[k];
//	}
//	cout << endl;
//	return;
//}
//int main()
//{
//	int n = 0;
//	int num = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> num;
//		buy(num);
//	}
//	return 0;
//}