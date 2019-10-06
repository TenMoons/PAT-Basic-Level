#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>

int main() {
	int A, B, D, sum;
	int ans[50];
	scanf("%d %d %d", &A, &B, &D);
	sum = A + B;
	int num = 0;
	do {
		ans[num++] = sum % D;
		sum = sum / D;
	} while (sum != 0);
	for (int i = num - 1; i >= 0; i--)
		printf("%d", ans[i]);
	system("pause");
	return 0;
}