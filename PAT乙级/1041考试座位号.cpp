#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
const int MAX = 1001;
struct student {
	long long id;  // ׼��֤��
	int examSeat;  // ������λ��
}testSeat[MAX]; // ���Ի���λ����Ϊ�±�
int main() {
	int N, M, seat, examSeat;
	long long id;
	scanf("%d", &N); // ��������
	for (int i = 0; i < N; i++) {
		scanf("%lld %d %d", &id, &seat, &examSeat);
		testSeat[seat].id = id;
		testSeat[seat].examSeat = examSeat;
	}
	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		scanf("%d", &seat);
		printf("%lld %d\n", testSeat[seat].id, testSeat[seat].examSeat);
	}
	system("pause");
	return 0;
}