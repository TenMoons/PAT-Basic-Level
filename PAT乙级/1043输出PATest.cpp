#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<string>
using namespace std;
char dict[6] = { 'P', 'A', 'T', 'e', 's', 't' };
int hashTable[6];  // ¼ÇÂ¼¸öÊý
int main() {
	char s[10010];
	scanf("%s", s);
	int len = strlen(s);
	int sum = 0;
	for(int i = 0; i < len; i++)
		for(int j = 0; j < 6; j++)
			if(s[i] == dict[j]) {
				hashTable[j]++;
				sum++;
		}
	while (sum > 0) {
		for(int i = 0; i < 6; i++)
			if (hashTable[i] > 0) {
				printf("%c", dict[i]);
				hashTable[i]--;
				sum--;
			}
	}
	system("pause");
	return 0;
}