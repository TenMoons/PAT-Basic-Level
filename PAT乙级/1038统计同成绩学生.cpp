#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<string>
using namespace std;

int grade[101];

int main() {
	int n;
	scanf("%d", &n);  // ������
	memset(grade, 0, sizeof(grade));  // ���ɼ�������ʼ��Ϊ0
	for (int i = 0; i < n; i++) {
		int tmp;
		scanf("%d", &tmp);
		grade[tmp]++;
	}
	int k;
	scanf("%d", &k);  //��ѯ��
	for (int i = 0; i < k; i++) {
		int query;
		scanf("%d", &query);
		if (i == 0)
			printf("%d", grade[query]);
		else
			printf(" %d", grade[query]);
	}
	system("pause");
	return 0;
}