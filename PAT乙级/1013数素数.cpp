#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isPrime(int n) {
	int i;
	for (i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	int M, N;
	int count = 0, count2 = 0;
	int i = 2;
	scanf("%d %d", &M, &N);
	while (1) {
		if (isPrime(i) == 1) {
			count++;
			if (count >= M && count <= N) {
				count2++;
				if (count == N)
					printf("%d", i);
				else if (count2 % 10 == 0)
					printf("%d\n", i);
				else if(count2 % 10 != 0)
					printf("%d ", i);
			}		
		}
		i++;
		if (count == N)
			break;
	}
	system("pause");
	return 0;
}