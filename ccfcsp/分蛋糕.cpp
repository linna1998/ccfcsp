//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int n = 0, k = 0;
//	int weight[1000] = { 0 };
//	cin >> n >> k;
//	int currentweight = 0, result = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> weight[i];
//		if (currentweight + weight[i] >= k)
//		{
//			result++;
//			currentweight = 0;
//		}
//		else
//		{
//			currentweight += weight[i];
//		}
//	}
//	if (currentweight > 0) result++;
//	cout << result << endl;
//	return 0;
//}