#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<string>
using namespace std;

struct yb {
	double amount;
	double price;
	double s;  // ����
}a[1001];
bool cmp(yb a, yb b) {
	return a.s > b.s;
}

int main() {
	int n;
	double d;  // n�±���������d�г����������
	double sum = 0.0;
	scanf("%d %lf", &n, &d);
	for (int i = 0; i < n; i++)
		scanf("%lf", &a[i].amount);  // ����ÿ���±������
	for (int i = 0; i < n; i++) {
		scanf("%lf", &a[i].price);  // ����ÿ���±����ۼ�
		a[i].s = a[i].price / a[i].amount;  // �������
	}
	sort(a, a + n, cmp);
	for (int i = 0; i < n; i++) {
		if (a[i].amount >= d) {
			sum += a[i].s * d;
			break;
		}
		else {
			sum += a[i].price;
			d -= a[i].amount;
		}
	}
	printf("%.2f\n", sum);
	return 0;
}
