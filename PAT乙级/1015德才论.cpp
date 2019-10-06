#define _CRT_SECURE_NO_WARNINGS
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
using namespace std;

struct stu{
	char sno[9];  // ׼��֤��
	int dg;  // �·�
	int cg;  // �ŷ�
	int sum = 0;  // �ܷ�
	int flag;  // �������
}student[100001];
int N, L, H;  // N:�������� L��¼ȡ��ͷ����� H����¼������

bool cmp(stu a, stu b) {
	if (a.flag != b.flag)
		return a.flag < b.flag;  // ���С������
	else if (a.sum != b.sum)
		return a.sum > b.sum;  // �����ͬ���ִܷ�������
	else if (a.dg != b.dg)
		return a.dg > b.dg;  // �����ͬ���ܷ���ͬ���·ָ�������
	else
		return strcmp(a.sno, b.sno) < 0;  // �����ͬ���ܷ���ͬ�ҵ·���ͬ��׼��֤��С������
	
}

int main() {
	scanf("%d %d %d", &N, &L, &H);
	int count = N;  // �ﵽ��ͷ����ߵĿ�������
	for (int i = 0; i < N; i++) {
		scanf("%s %d %d", student[i].sno, &student[i].dg, &student[i].cg);
		student[i].sum = student[i].cg + student[i].dg;  // �²��ܷ�
		if (student[i].dg < L || student[i].cg < L) {
			count--;  // ¼ȡ������һ
			student[i].flag = 5;  // δ¼ȡ����
		}

		// ��¼ȡ��������
		else if (student[i].cg >= H && student[i].dg >= H)
			student[i].flag = 1;  // һ�࿼��
		else if (student[i].dg >= H && student[i].cg < H)
			student[i].flag = 2;  // ���࿼��
		else if (student[i].dg < H && student[i].cg < H && student[i].dg >= student[i].cg)
			student[i].flag = 3;  // ���࿼��
		else 
			student[i].flag = 4;  // ���࿼��
	}
	sort(student, student + N, cmp);
	printf("%d\n", count);
	for (int i = 0; i < count; i++)
		printf("%s %d %d\n", student[i].sno, student[i].dg, student[i].cg);
	system("pause");
	return 0;
}