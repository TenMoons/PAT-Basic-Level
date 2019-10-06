#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main() {
	char n[1001];
	int a;
	scanf("%s", n);
	scanf("%d", &a);
	int tmp = 0;
	int flag = 0;
	for (int i = 0; i < strlen(n); i++) {
		tmp = n[i] - '0' + tmp * 10;  // 余数和被除数
		if (tmp >= a) {
			printf("%d", tmp / a);
			flag = 1;
		}

		else if (flag)
			printf("0");
		tmp = tmp % a;
	}
	if (flag == 0)
		printf("0");
	printf(" %d", tmp);
	system("pause");
	return 0;
}