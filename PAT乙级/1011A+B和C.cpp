#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
int main() {
	int T;
	int i;
	scanf("%d", &T);
	for (i = 0; i < T; i++) {
		long long a, b, c;
		scanf("%lld %lld %lld", &a, &b, &c);
		if (a + b > c)
			printf("Case #%d: true\n", i + 1);
		else
			printf("Case #%d: false\n", i + 1);
	}

	system("pause");
	return 0;
}