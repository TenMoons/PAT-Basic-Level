#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;

int main() {
	char s1[100001], s2[100001];
	bool sign = false;
	scanf("%s", s1);  // ����ļ�
	scanf("%s", s2);  // ��ȷ���ַ���
	bool lower = false;  // ��ʾ�ϵ����Ƿ����
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	for(int i = 0; i < len1; i++)
		if (s1[i] == '+') {  // �ϵ�������
			lower = true;
			break;
		}
	for (int i = 0; i < len2; i++) {
		bool flag = false;  // s2[i]��û�л�
		for (int j = 0; j < len1; j++) {
			if (s2[i] == s1[j] || s2[i] == s1[j] + 32) {  // ���������
				flag = true;
				break;
			}
		}
		if (flag == false) {
			if (lower == true && s2[i] >= 'A' && s2[i] <= 'Z')
				continue;
			printf("%c", s2[i]);
			sign = true;  // ����������ַ�
		}
	}
	if (sign == false)
		printf("\n");
	system("pause");
	return 0;
}