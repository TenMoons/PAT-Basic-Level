#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
#include<algorithm>
#include<iostream>
using namespace std;

bool cmp(int a, int b) {
	return a > b;
}
	
int main() {
	int k, m, a[110];
	scanf("%d", &k);
	bool Hash[10000];
	memset(Hash, false, sizeof(Hash));
	for (int i = 0; i < k; i++) {
		scanf("%d", &a[i]);
		m = a[i];
		while (m != 1) {  // 进行当前数的3n+1猜想
			if (m % 2 == 1)
				m = 3 * m + 1;
			m /= 2;
			Hash[m] = true;  // m被覆盖
		}
	}
	int count = 0;  // 关键数的个数
	for (int i = 0; i < k; i++) {
		if (Hash[a[i]] == false)  // a[i]未被覆盖
			count++;
	}
	sort(a, a + k, cmp);
	for (int i = 0; i < k; i++) {
		if (Hash[a[i]] == false) {
			printf("%d", a[i]);
			count--;
			if (count > 0)
				printf(" ");
		}
	}
	system("pause");
	return 0;
}