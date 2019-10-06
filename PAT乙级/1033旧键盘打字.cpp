#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;

const int maxn = 100010;
bool hashTable[256];
char s[maxn];

int main() {
	string s1;
	memset(hashTable, true, sizeof(hashTable));  // 初值表示所有键都完好
	getline(cin, s1);
	int i;
	for (i = 0; i < s1.length(); i++) 
		s[i] = s1[i];	
	s[i] = '\0';
	int len = strlen(s);
	bool flag = false;
	if (len == 0)
		flag = true;  // 所有键位都完好
	for (int i = 0; i < len; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;
		hashTable[s[i]] = false;  // 键位出错
	}
	getline(cin, s1);
	for (i = 0; i < s1.length(); i++)
		s[i] = s1[i];
	s[i] = '\0';
	len = strlen(s);
	if (flag == false)
		for (int i = 0; i < len; i++) {
			if (s[i] >= 'A' && s[i] <= 'Z') {
				int low = s[i] + 32;
				if (hashTable[low] == true && hashTable['+'] == true)
					printf("%c", s[i]);
			}
			else if (hashTable[s[i]] == true)
				printf("%c", s[i]);
		}
	else
		printf("%s", s);
	printf("\n");
	system("pause");
	return 0;
}