#include <stdio.h>
#include<iostream>
int main()
{
	int m, n;
	int flag = 1;
	while (scanf_s("%d %d", &m, &n) != EOF) {
		if (n > 0) {
			if (flag == 1) {
				printf("%d %d", m*n, n - 1);
				flag = 0;
			}
			else {
				printf(" %d %d", m*n, n - 1);
			}
		}
	}
	if (flag == 1)
		printf("0 0");
	system("pause");
	return 0;
}