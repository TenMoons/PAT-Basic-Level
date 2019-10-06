#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	int N, M;
	scanf("%d %d", &N, &M);
	M = M % N;
	getchar();
	int *num;
	num = (int *)malloc(sizeof(int)*N);
	for (int i = 0; i < N; i++)
		scanf("%d", &num[i]);
	for (int i = N - M; i < N; i++)
		printf("%d ", num[i]);
	for (int i = 0; i < N - M - 1; i++)
		printf("%d ", num[i]);
	printf("%d", num[N - M - 1]);
	system("pause");
	return 0;
}