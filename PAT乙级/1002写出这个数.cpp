/*读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字*/
#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
#include<cstring>

char pinyin[10][5] = { "ling","yi","er","san","si","wu","liu","qi","ba","jiu" };

int main() {
	char num[101];
	scanf("%s", num);
	int sum = 0;
	for (int i = 0; i < (int)strlen(num); i++) 
		sum += num[i] - '0';
	int i = 0;
	int tmp[100];
	while (sum != 0) {
		tmp[i++] = sum % 10;
		sum = sum / 10;
	}
	for (int j = i - 1; j >= 0; j--) {
		if (j == i - 1)
			printf("%s", pinyin[tmp[j]]);
		else
			printf(" %s", pinyin[tmp[j]]);
	}
	system("pause");
	return 0;
}