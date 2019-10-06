#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<stdlib.h>

/* B=1, C=1, J=2 恰好是字典序且循环相克 */
int change(char c) {
	if (c == 'B')
		return 0;
	else if (c == 'C')
		return 1;
	else if(c == 'J')
		return 2;
}

/* 甲胜的条件：(c1+1)%3 == c2 */
/* 乙胜的条件：(c2+1)%3 == c1 */

int main() {
	char mp[3] = { 'B', 'C', 'J' };
	int n;
	scanf("%d", &n);  // 局数
	int times_A[3] = { 0 }, times_B[3] = { 0 };  // 分别记录甲乙的胜平负次数
	int hand_A[3] = { 0 }, hand_B[3] = { 0 }; // 按BCJ顺序分别记录甲乙三种手势的获胜次数
	char c1, c2;
	int k1, k2;
	for (int i = 0; i < n; i++) {
		getchar();
		scanf("%c %c", &c1, &c2);  // 甲乙比划的手势
		k1 = change(c1);
		k2 = change(c2);
		if ((k1 + 1) % 3 == k2) {   // 同时记录甲胜乙负
			times_A[0]++;
			times_B[2]++;
			hand_A[k1]++;   // 增加甲k1手势获胜次数
		}
		else if((k2 + 1) % 3 == k1) {  // 乙胜甲负
			times_A[2]++;
			times_B[0]++;
			hand_B[k2]++;
		}
		else {  // 平局
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