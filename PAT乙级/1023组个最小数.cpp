#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int count[10];
	for (int i = 0; i < 10; i++)
		scanf("%d", &count[i]);  // 数i的个数
	for (int i = 1; i < 10; i++) {
		if (count[i] != 0) {
			printf("%d", i);  // 确定开头
			count[i]--;
			break;
		}
	}
	for (int i = 0; i < 10; i++) {
		while (count[i] != 0) {
			printf("%d", i);
			count[i]--;
		}

	}
	return 0;
}
