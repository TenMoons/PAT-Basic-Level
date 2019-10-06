#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn = 100010;
int n, p, a[maxn];

int binarySearch(int i, long long x) {  // [i+1, n-1]内查找第一个大于x的数的位置
	if (a[n - 1] <= x)
		return n;
	int l = i + 1, r = n - 1, mid;
	while (l < r) {
		mid = (l + r) / 2;
		if (a[mid] < x)
			l = mid + 1;
		else
			r = mid;
	}
	return l;
}

int main() {
	scanf("%d %d", &n, &p);
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	sort(a, a + n);  // 按升序排序
	int ans = 1;
	for (int i = 0; i < n; i++) {
		int j = binarySearch(i, (long long)a[i] * p);
		ans = max(ans, j - i);  // 更新最大长度
	}
	printf("%d\n", ans);
	return 0;
}
