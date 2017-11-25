//// TODO: 30%
//#include <iostream>
//#include <vector>
//using namespace std;
//
//int N = 0, M = 0;
//int innum[100010] = { 0 };
//
//int main()
//{
//	int opt, l, r, v;
//	int sum = 0;
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++)
//	{
//		cin >> innum[i];
//	}	
//	for (int i = 0; i < M; i++)
//	{
//		cin >> opt;
//		if (opt == 1)
//		{
//			cin >> l >> r >> v;
//			for (int j = l; j <= r; j++)
//			{
//				if (innum[j] % v == 0) innum[j] /= v;
//			}
//		}
//		else if (opt == 2)
//		{
//			cin >> l >> r;
//			sum = 0;
//			for (int j = l; j <= r; j++)
//			{
//				sum += innum[j];
//			}
//			cout << sum << endl;
//		}
//	}
//	return 0;
//}
//
//
