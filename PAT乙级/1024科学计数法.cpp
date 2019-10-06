#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
#include<cstring>

int main() {
	char s[10001];
	scanf("%s", s);
	int len = strlen(s);
	if (s[0] == '-')printf("-");
	int pos = 0;  // 代表E的位置
	while (s[pos] != 'E')
		pos++;
	int exp = 0;  // 指数绝对值
	for (int i = pos + 2; i < len; i++)
		exp = exp * 10 + s[i] - '0';
	if (exp == 0)
		for (int i = 1; i < pos; i++)
			printf("%c", s[i]);
	if (s[pos + 1] == '-') {
		printf("0.");
		for (int i = 0; i < exp - 1; i++)  // 输出exp-1个0
			printf("0");
		printf("%c", s[1]);  //输出除小数点以外的数
		for (int i = 3; i < pos; i++)
			printf("%c", s[i]);
	}
	else {
		for (int i = 1; i < pos; i++) {  // 输出小数点移动之后的数
			if (s[i] == '.')
				continue;  // 忽略原小数点
			printf("%c", s[i]);  
			if (i == exp + 2 && pos - 3 != exp)  // 小数点在位置exp+2上
				printf(".");  // 原小数点和E之间的数字个数pos-3不能等于小数点右移位数exp
		}
		for (int i = 0; i < exp - pos + 3; i++)  // 如果指数exp较大，则输出多余的0
			printf("0");
	}
	system("pause");
	return 0;
}