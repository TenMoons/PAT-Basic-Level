/*
����������ĸ B ����ʾ���١�����ĸ S ��ʾ��ʮ������ 12...n ����ʾ��Ϊ��ĸ�λ���� n��<10��
������ʽ�������һ�������� 3 λ��������,��<1000
�������� 1��
234
������� 1��(ÿ�����ռһ��)
BBSSS1234
�������� 2��
23
������� 2��
SS123
*/
#include<iostream>
using namespace std;

int main() {
	int countB = 0;
	int countS = 0;
	int countG = 0;
	int n;
	cin >> n;
	countB = n / 100;
	countS = (n / 10) % 10;
	countG = n % 10;
	for (int i = 0; i < countB; i++)
		cout << "B";
	for (int i = 0; i < countS; i++)
		cout << "S";
	for (int i = 1; i <= countG; i++)
		cout << i;
	//system("pause");
	return 0;
}