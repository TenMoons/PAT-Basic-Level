#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
#include<cstring>

int main() {
	char s[10001];
	scanf("%s", s);
	int len = strlen(s);
	if (s[0] == '-')printf("-");
	int pos = 0;  // ����E��λ��
	while (s[pos] != 'E')
		pos++;
	int exp = 0;  // ָ������ֵ
	for (int i = pos + 2; i < len; i++)
		exp = exp * 10 + s[i] - '0';
	if (exp == 0)
		for (int i = 1; i < pos; i++)
			printf("%c", s[i]);
	if (s[pos + 1] == '-') {
		printf("0.");
		for (int i = 0; i < exp - 1; i++)  // ���exp-1��0
			printf("0");
		printf("%c", s[1]);  //�����С�����������
		for (int i = 3; i < pos; i++)
			printf("%c", s[i]);
	}
	else {
		for (int i = 1; i < pos; i++) {  // ���С�����ƶ�֮�����
			if (s[i] == '.')
				continue;  // ����ԭС����
			printf("%c", s[i]);  
			if (i == exp + 2 && pos - 3 != exp)  // С������λ��exp+2��
				printf(".");  // ԭС�����E֮������ָ���pos-3���ܵ���С��������λ��exp
		}
		for (int i = 0; i < exp - pos + 3; i++)  // ���ָ��exp�ϴ�����������0
			printf("0");
	}
	system("pause");
	return 0;
}