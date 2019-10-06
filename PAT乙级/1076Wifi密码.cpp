#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

/*
输入样例：
8
A-T B-F C-F D-F
C-T B-F A-F D-F
A-F D-F C-F B-T
B-T A-F C-F D-F
B-F D-T A-F C-F
A-T C-F B-F D-F
D-T B-F C-F A-F
C-T A-F B-F D-F
输出样例：
13224143
*/
#include<iostream>
#include<string>
using namespace std;
int main() {
	char s[16];
	int ans[100];
	int i = 0;
	int N;
	cin >> N;
	while (cin >> s) {
		if (s[2] == 'T') {
			ans[i++] =s[0] - 'A' + 1;
			N--;
		}
		if (N == 0)
			break;
	}
	for (int j = 0; j < i; j++)
		cout << ans[j];
	system("pause");
	return 0;
}