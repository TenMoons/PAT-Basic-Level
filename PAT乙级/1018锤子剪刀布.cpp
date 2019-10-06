#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>

/* B=1, C=1, J=2 ǡ�����ֵ�����ѭ����� */
int change(char c) {
	if (c == 'B')
		return 0;
	else if (c == 'C')
		return 1;
	else if(c == 'J')
		return 2;
}

/* ��ʤ��������(c1+1)%3 == c2 */
/* ��ʤ��������(c2+1)%3 == c1 */

int main() {
	char mp[3] = { 'B', 'C', 'J' };
	int n;
	scanf("%d", &n);  // ����
	int times_A[3] = { 0 }, times_B[3] = { 0 };  // �ֱ��¼���ҵ�ʤƽ������
	int hand_A[3] = { 0 }, hand_B[3] = { 0 }; // ��BCJ˳��ֱ��¼�����������ƵĻ�ʤ����
	char c1, c2;
	int k1, k2;
	for (int i = 0; i < n; i++) {
		getchar();
		scanf("%c %c", &c1, &c2);  // ���ұȻ�������
		k1 = change(c1);
		k2 = change(c2);
		if ((k1 + 1) % 3 == k2) {   // ͬʱ��¼��ʤ�Ҹ�
			times_A[0]++;
			times_B[2]++;
			hand_A[k1]++;   // ���Ӽ�k1���ƻ�ʤ����
		}
		else if((k2 + 1) % 3 == k1) {  // ��ʤ�׸�
			times_A[2]++;
			times_B[0]++;
			hand_B[k2]++;
		}
		else {  // ƽ��
			times_A[1]++;
			times_B[1]++;
		}
	}
	int max1 = 0, max2 = 0;
	for (int i = 1; i < 3; i++) {
		if (hand_A[i] > hand_A[max1])
			max1 = i;
		if (hand_B[i] > hand_B[max2])
			max2 = i;
	}

	printf("%d %d %d\n", times_A[0], times_A[1], times_A[2]);
	printf("%d %d %d\n", times_B[0], times_B[1], times_B[2]);
	printf("%c %c", mp[max1], mp[max2]);
	system("pause");
	return 0;
}