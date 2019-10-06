#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main() {
	char str[81];  // 81¶ø²»ÊÇ80
	gets_s(str);
	int count = 0;
	for (int i = strlen(str) - 1; i >= 0; i--) {
		if (str[i] != ' '&& i != 0)
			count++;
		else {
			int j = i;
			if (i != 0)
				j++;
			for (; j <= i + count; j++)
				printf("%c", str[j]);
			if (i != 0)
				printf(" ");
			count = 0;
		}
	}
		system("pause");
	return 0;
}