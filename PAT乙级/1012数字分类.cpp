#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
	int A1 = 0, A2 = 0, A3 = 0, A4 = 0, A5 = 0;
	int i, num, N;
	int sign = 1;
	int count1 = 0, count2 = 0, count4 = 0, count5 = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		scanf("%d", &num);
		if (num % 5 == 0 && num % 2 == 0) {
			A1 += num;
			count1++;
		}

		else if (num % 5 == 1) {
			count2++;
			A2 += num*sign;
			sign = -sign;
		}
		else if (num % 5 == 2)
			A3++;
		else if (num % 5 == 3) {
			count4++;
			A4 += num;
		}
		else {
			if (num > A5)
				A5 = num;
			count5++;
		}
	}
	if (count1 == 0)
		printf("N ");
	else
		printf("%d ", A1);
	if (count2 == 0)
		printf("N ");
	else
		printf("%d ", A2);
	if (A3 == 0)
		printf("N ");
	else
		printf("%d ", A3);
	if (count4 == 0)
		printf("N ");
	else
		printf("%.1f ", 1.0*A4 / count4);
	if (count5 == 0)
		printf("N");
	else
		printf("%d", A5);
	system("pause");
	return 0;
}
