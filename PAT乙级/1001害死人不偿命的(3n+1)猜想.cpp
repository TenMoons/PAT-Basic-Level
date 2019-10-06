#include<iostream>
using namespace std;

int main() {
	int step = 0;
	int num;
	cin >> num;
	while (num != 1) {
		if (num%2 != 0)
			num = 3 * num + 1;
		num /= 2;
		step++;
	}
	cout << step << endl;
	system("pause");
	return 0;
}