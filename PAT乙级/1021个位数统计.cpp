#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<cstdlib>

int count[10] = { 0 };

int main() {
	char num[1001];
	scanf("%s", num);  // 存放输入的正整数
	for (unsigned i = 0; i < strlen(num); i++) {
		int tmp = num[i] - '0';
		count[tmp]++;
	}
	for (int i = 0; i < 10; i++) {
		if (count[i] != 0)
			printf("%d:%d\n", i, count[i]);
	}
	system("pause");
	return 0;
}