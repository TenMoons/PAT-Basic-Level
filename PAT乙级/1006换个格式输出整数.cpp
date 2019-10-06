/*
让我们用字母 B 来表示“百”、字母 S 表示“十”，用 12...n 来表示不为零的个位数字 n（<10）
换个格式来输出任一个不超过 3 位的正整数,即<1000
输入样例 1：
234
输出样例 1：(每个输出占一行)
BBSSS1234
输入样例 2：
23
输出样例 2：
SS123
*/
#include<iostream>
using namespace std;

int main() {
	int countB = 0;
	int countS = 0;
	int countG = 0;
	int n;
	cin >> n;
	countB = n / 100;
	countS = (n / 10) % 10;
	countG = n % 10;
	for (int i = 0; i < countB; i++)
		cout << "B";
	for (int i = 0; i < countS; i++)
		cout << "S";
	for (int i = 1; i <= countG; i++)
		cout << i;
	//system("pause");
	return 0;
}