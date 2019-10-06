#include <iostream>
#include <string.h>
using namespace std;
int main() {
	char str[100];
	int n;  // ×Ö·û´®Êý
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		int count1 = 0;
		int count2 = 0;
		int count3 = 0;
		int pos_P = 0;
		int pos_T = 0;
		for (int j = 0; j < strlen(str); j++) {
			if (str[j] == 'P') {
				count2++;
				pos_P = j;
			}
			else if (str[j] == 'A')
				count1++;
			else if (str[j] == 'T') {
				count3++;
				pos_T = j;
			}
		}
		if (count1 + count2 + count3 != strlen(str) ||
			pos_T - pos_P <= 1 ||
			count2 > 1 || count3 > 1 ||
			pos_P * (pos_T - pos_P - 1) != strlen(str) - pos_T - 1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	system("pause");
	return 0;
}