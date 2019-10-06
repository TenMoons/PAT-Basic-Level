#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cmath>
#include<cstdlib>


int main() {
	int n;
	int bot;
	char c;
	scanf("%d %c", &n, &c);
	bot = (int)sqrt(2.0*(n + 1)) - 1;  // 底边字符数
	if (bot % 2 == 0)bot--;
	int use = (bot + 1)*(bot + 1) / 2 - 1;  // 字符总数
	for (int i = bot; i >= 1; i -= 2) {  // 上半部分
		for (int j = 0; j < (bot - i) / 2; j++)
			printf(" ");
		for (int j = 0; j < i; j++)
			printf("%c", c);
		printf("\n");
	}
	for (int i = 3; i <= bot; i += 2) {
		for (int j = 0; j < (bot - i) / 2; j++)
			printf(" ");
		for (int j = 0; j < i; j++)
			printf("%c", c);
		printf("\n");
	}
	printf("%d\n", n - use);
	system("pause");
	return 0;
}