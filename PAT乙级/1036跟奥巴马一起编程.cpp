#include<iostream>
using namespace std;


int main() {
	int N;
	char c;
	cin >> N >> c;
	int height;
	if (N % 2 == 0) // NÎªÅ¼Êý
		height = N / 2 - 2;
	else
		height = (N + 1) / 2 - 2;
	for (int i = 0; i < N; i++) 
		cout << c;
	cout << endl;
	for (int i = 0; i < height; i++) {
		cout << c;
		for (int j = 0; j < N - 2; j++)
			cout << " ";
		cout << c;
		cout << endl;
	}
	for (int i = 0; i < N; i++)
		cout << c;
	system("pause");
	return 0;
}