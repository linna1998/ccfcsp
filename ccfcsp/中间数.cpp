////201612-1
//// µÈ´ý²âÆÀ~
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	int N = 0;
//	int a[1010] = { 0 };
//
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a, a + N);
//
//	int result = 0;
//	bool findanswer = false;
//
//	int temp1 = 0, temp2 = 0;
//	int below = 0, above = 0;
//	if ((N / 2 - 1 >= 0) && (N / 2 - 1 < N))
//	{
//		temp1 = a[N / 2 - 1];
//		below = 0;
//		above = 0;
//		for (int i = 0; i < N; i++)
//		{
//			if (a[i] < temp1) below++;
//			else if (a[i] > temp1) above++;
//		}
//		if (below == above)
//		{
//			result = temp1;
//			findanswer = true;
//		}
//	}
//	if ((N / 2) >= 0 && (N / 2 < N))
//	{
//		temp2 = a[N / 2];
//		below = 0;
//		above = 0;
//		for (int i = 0; i < N; i++)
//		{
//			if (a[i] < temp2) below++;
//			else if (a[i] > temp2) above++;
//		}
//		if (below == above)
//		{
//			result = temp2;
//			findanswer = true;
//		}
//	}
//	if (findanswer) cout << result << endl;
//	else cout << -1 << endl;
//	return 0;
//}