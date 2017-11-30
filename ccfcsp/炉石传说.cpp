////201609-3
//// Waiting to be checked.
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//class Node
//{
//public:
//	int id;  // 位置，位置0表示是英雄
//	int H;  // 生命力
//	int A;  // 攻击力
//	Node(int inid = -1, int inH = 0, int inA = 0)
//	{
//		id = inid;
//		H = inH;
//		A = inA;
//	}
//};
//int main()
//{
//	int n = 0;
//	string action;
//	cin >> n;
//	Node Player[2][8];//Player[0]表示先手，Player[1]后手
//	Player[0][0] = Node(0, 30, 0);
//	Player[1][0] = Node(0, 30, 0);
//	int playerid = 0;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> action;
//		if (action == "summon")
//		{
//			int position, attack, health;
//			cin >> position >> attack >> health;
//			Node new_node = Node(position, health, attack);
//			for (int i = 7; i > position; i--)
//				Player[playerid][i] = Player[playerid][i - 1];
//			Player[playerid][position] = new_node;
//		}
//		else if (action == "attack")
//		{
//			int attacker, defender;
//			cin >> attacker >> defender;
//			//互相攻击
//			Player[playerid][attacker].H -= Player[1 - playerid][defender].A;
//			Player[1 - playerid][defender].H -= Player[playerid][attacker].A;
//			//死亡移除
//			if (Player[playerid][attacker].H < 0)
//			{
//				for (int i = attacker; i < 7; i++)
//					Player[playerid][i] = Player[playerid][i + 1];
//			}
//			if (Player[1 - playerid][defender].H < 0 && defender != 0)
//			{
//				for (int i = defender; i < 7; i++)
//					Player[1 - playerid][i] = Player[1 - playerid][i + 1];
//			}
//		}
//		else if (action == "end")
//		{
//			playerid = 1 - playerid;
//		}
//	}
//
//	//结果结算，第一行
//	//一方英雄死亡之后，没有后续操作
//	if (Player[0][0].H > 0 && Player[1][0].H <= 0)
//	{
//		cout << 1 << endl;
//	}
//	else if (Player[1][0].H > 0 && Player[0][0].H <= 0)
//	{
//		cout << -1 << endl;
//	}
//	else if (Player[0][0].H > 0 && Player[1][0].H > 0)
//	{
//		cout << 0 << endl;
//	}
//
//	for (playerid = 0; playerid <= 1; playerid++)
//	{
//		//第二行  && 第四行
//		cout << Player[playerid][0].H << endl;
//		// 还是负数时输出0？？？
//
//		//第三行 && 第五行
//		vector<int> Alive;
//		for (int i = 1; i <= 7; i++)
//		{
//			if (Player[playerid][i].H > 0) 
//				Alive.push_back(Player[playerid][i].H);
//		}
//		int AliveSize = Alive.size();
//		cout << AliveSize;
//		for (int i = 0; i < AliveSize; i++)
//		{
//			cout << " " << Alive[i];
//		}
//		cout << endl;
//	}
//	return 0;
//}