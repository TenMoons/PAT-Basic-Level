#include<iostream>
#include<string.h>
using namespace std;

int main() {
	char sell[1000], want[1000];  // ���ĺ������
	int count_s[62] = { 0 }, count_w[62] = { 0 };  // �ܹ�ֻ����0-9��A-Z,a-z��62�����ӣ�ͳ�����ǵ�����
	int left = 0, lack = 0;  // ��ʾ����ĺ�Ƿȱ��
	cin >> sell;
	cin >> want;
	for (int i = 0; i < strlen(sell); i++) {
		if (sell[i] >= '0' && sell[i] <= '9') // 0-9 ��Ӧcount_s[0]-count_s[9]
			count_s[sell[i] - '0']++;
		else if (sell[i] >= 'A' && sell[i] <= 'Z')
			count_s[sell[i] - 'A' + 10]++;  // A-Z ��Ӧcount_s[10]-count_s[35]
		else
			count_s[sell[i] - 'a' + 36]++;  // a-z ��Ӧcount_s[36]-count_s[61]
	}
	for (int i = 0; i < strlen(want); i++) {
		if (want[i] >= '0' && want[i] <= '9') {// 0-9 ��Ӧcount_s[0]-count_s[9]
			count_s[want[i] - '0']--;
			count_w[want[i] - '0']++;
		}
		else if (want[i] >= 'A' && want[i] <= 'Z') {
			count_s[want[i] - 'A' + 10]--;
			count_w[want[i] - 'A' + 10]++;
		} // A-Z ��Ӧcount_s[10]-count_s[35]
		else {
			count_s[want[i] - 'a' + 36]--;  // a-z ��Ӧcount_s[36]-count_s[61]
			count_w[want[i] - 'a' + 36]++;
		}

	}
	int sign = 1;
	for (int i = 0; i < 62; i++) {
		if (count_s[i] < 0) {
			sign = 0;
			lack += (-1)*count_s[i];
		}
	}
	if (sign) {
		cout << "Yes " << strlen(sell) - strlen(want);
	}
	else
		cout << "No " << lack;
	system("pause");
	return 0;
}