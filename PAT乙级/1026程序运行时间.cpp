#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cmath>
int main() {
	int c1, c2;
	const int CLK_TCK = 100;
	scanf("%d %d", &c1, &c2);
	double delta = (double)(c2 - c1)/CLK_TCK;
	int hour = (int)delta / 3600;
	int min = (int)(delta - hour * 3600) / 60;
	int sec = (round)(delta - hour * 3600 - min * 60);
	printf("%02d:%02d:%02d", hour, min, sec);
	system("pause");
	return 0;
}