#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;
char val[13] = { '0','1','2','3','4','5','6','7','8','9','J','Q','K' };
char a[101], b[101];
char ans[101];

int main() {
	scanf("%s %s", a, b);
	int len1 = strlen(a);
	int len2 = strlen(b);
	int len = len1 > len2 ? len1 : len2;
	reverse(a, a + len1);
	reverse(b, b + len2);
	for (int i = 0; i < len; i++) {
		int na = i < len1 ? a[i] - '0' : 0;
		int nb = i < len2 ? b[i] - '0' : 0;
		if (i % 2 == 0) {
			int tmp = (na + nb) % 13;
			if (tmp == 10)ans[i] = 'J';
			else if (tmp == 11)ans[i] = 'Q';
			else if (tmp == 12)ans[i] = 'K';
			else ans[i] = tmp + '0';
		}
		else {
			int tmp = nb - na;
			if (tmp < 0)tmp += 10;
			ans[i] = tmp + '0';
		}
	}
	reverse(ans, ans + len);
	printf("%s", ans);
	system("pause");
	return 0;
}