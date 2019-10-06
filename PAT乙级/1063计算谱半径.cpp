#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main() {
	int N;
	cin >> N; // 特征值个数
	float module[10000];
	for (int i = 0; i < N; i++) {
		int real, imag;
		cin >> real >> imag;
		module[i] = sqrt(real*real + imag * imag);
	}
	int max = 0;
	for (int i = 1; i < N; i++) {
		if (module[i] > module[max])
			max = i;
	}
	cout << fixed << setprecision(2) << module[max];
	//system("pause");
	return 0;
}