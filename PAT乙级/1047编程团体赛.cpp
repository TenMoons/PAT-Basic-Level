#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;

int hashTable[1001];

int main() {
	int n;
	scanf("%d", &n);
	int tno, sno, score;
	int max = 0, index;
	for (int i = 0; i < n; i++) {
		scanf("%d-%d %d", &tno, &sno, &score);
		hashTable[tno] += score;
		if (hashTable[tno] > max) {
			max = hashTable[tno];
			index = tno;
		}
	}
	printf("%d %d", index, max);
	system("pause");
	return 0;
}