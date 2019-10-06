#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstring>
#include<cstdlib>

int weight[18] = { 7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2 };
char M[12] = { '1','0','X','9','8','7','6','5','4','3','2' };

int main() {
	int N;
	scanf("%d", &N);  // 身份证个数
	int sign = 1;
	while (N--) {
		char id[19];
		int sum = 0;
		int Z = 0;
		scanf("%s", id);
		for (int i = 0; i < 17; i++) {   // 求权值之和
			sum += weight[i] * (id[i] - '0');
			if (id[i] - '0' > 9) {
				sign = 0;
				break;
			}
		}
		Z = sum % 11;
		if (id[17] != M[Z]) {
			printf("%s\n", id);
			sign = 0;
		}
	}
	if (sign)
		printf("All passed");
	system("pause");
	return 0;
}