#include<iostream>
using namespace std;

int main() {
	int N, M;  // NΪѧ������MΪ����
	int point[100];
	int ans[100];
	int stu[100] = { 0 };  // ѧ���÷�
	cin >> N >> M;
	for (int i = 0; i < M; i++) // �����ֵ
		cin >> point[i];
	for (int i = 0; i < M; i++)   // ��ȷ��
		cin >> ans[i];
	for (int i = 0; i < N; i++) {
		int a;
		for (int j = 0; j < M; j++) {
			cin >> a;
			if (a == ans[j])
				stu[i] += point[j];
		}	
	}
	for(int i = 0; i < N; i++)
		cout << stu[i] << endl;
	//system("pause");
	return 0;
}