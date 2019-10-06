#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>

int main() {
	int N;  // ��������
	int sno, grade;  // ѧУ��ţ�����	
	scanf("%d", &N);
	const int MAXSIZE = 100001;
	int sum[MAXSIZE] = { 0 };
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &sno, &grade);
		sum[sno] += grade;
	}
	int max = 1;
	for (int i = 2; i < N; i++) {
		if (sum[i] > sum[max])
			max = i;
	}
	printf("%d %d", max, sum[max]);
	system("pause");
	return 0;
}