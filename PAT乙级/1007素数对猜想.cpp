#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<memory.h>
#include<math.h>
int isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++)  // 使用sqrt(n)而不是n/2是为了降低时间复杂度
		if (n%i == 0)
			return 0;
	return 1;  // 是素数
}

int main() {
	int N;
	scanf("%d", &N);
	int *prime = (int*)malloc(sizeof(int)*N);
	memset(prime, 0, N);
	int j = 1;
	for (int i = 2; i <= N; i++) {
		if (isPrime(i) == 1) {
			prime[j] = i;
			j++;
		}
	}
	int count = 0;
	for (int i = 1; i < N; i++) {
		if (prime[i + 1] - prime[i] == 2)
			count++;
	}
	printf("%d", count);
	system("pause");
	return 0;
}
