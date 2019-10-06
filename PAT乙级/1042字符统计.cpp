#define _CRT_SECURE_NO_WARNINGS
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int hashTable[26];  // ���26����ĸ��Ƶ��

int main() {
	string str;
	char s[1010];
	getline(cin, str);
	int i, max = 0;
	for (i = 0; i < str.length(); i++) {
		s[i] = str[i];
		if (s[i] >= 'A' && s[i] <= 'Z')
			s[i] += 32;  // ��д��ĸת��ΪСд��ĸ
		if (s[i] >= 'a' && s[i] <= 'z') {
			hashTable[s[i] - 'a']++;  // ����Ƶ�ʼ�1
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