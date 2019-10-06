#include<iostream>
using namespace std;


int main() {
	long long A, B;
	int Da, Db;
	long long val_A = 0, val_B = 0;
	cin >> A >> Da >> B >> Db;
	while (A != 0) {
		if (A % 10 == Da)
			val_A = Da + val_A * 10;
		A = A / 10;
	}
	while (B != 0) {
		if (B % 10 == Db)
			val_B = Db + val_B * 10;
		B = B / 10;
	}
	cout << val_A + val_B;
	system("pause");
	return 0;
}