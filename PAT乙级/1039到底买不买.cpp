#define _CRT_SECURE_NO_WARNINGS
#include<cstdlib>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;

bool hashTable[256];  // ��ʾ�����Ƿ�����Ҫ���г���
int countn[256];

int main() {
	memset(hashTable, false, sizeof(hashTable));  // ��ֵΪ��û�г��ֹ�
	char s1[1010];
	int sumn = 0;  // ʣ��ĺͻ�ȱ��
	scanf("%s", s1);  // �����鴮
	int len1 = strlen(s1);
	for (int i = 0; i < len1; i++) {
		countn[s1[i]]++;  // ͳ��ÿ����ɫ�����ӵ�����
	}
	scanf("%s", s1);  // ��Ҫ���鴮
	bool flag = true;  // �Ƿ�����
	int len = strlen(s1);
	for (int i = 0; i < len; i++) {  // ����s1���ж�ÿһ����ɫ�Ƿ���
		hashTable[s1[i]] = true;  // ��ʾ�����ɫ����Ҫ��
		if (countn[s1[i]] == 0) {  // ��������ɫ̯��û����
			flag = false;  // �Ѿ�������������
			sumn++; // ȱ����������1
		}
		else
			countn[s1[i]]--;
	}
	if (flag == true) 
		printf("Yes %d\n", len1-len);
	else
		printf("No %d\n", sumn);  // ȱ��������
	system("pause");
	return 0;
}