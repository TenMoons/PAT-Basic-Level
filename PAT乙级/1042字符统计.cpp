#define _CRT_SECURE_NO_WARNINGS
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int hashTable[26];  // 存放26个字母的频率

int main() {
	string str;
	char s[1010];
	getline(cin, str);
	int i, max = 0;
	for (i = 0; i < str.length(); i++) {
		s[i] = str[i];
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;  // 大写字母转换为小写字母
		if (s[i] >= 'a' && s[i] <= 'z') {
			hashTable[s[i] - 'a']++;  // 出现频率加1
			if (hashTable[s[i] - 'a'] > max)
				max = hashTable[s[i] - 'a'];			
		}
	}
	s[i] = '\0';
	for (int i = 0; i < str.length(); i++) {
		if (hashTable[i] == max) {
			printf("%c %d", i + 'a', hashTable[i]);
			break;
		}
	}
	system("pause");
	return 0;
}