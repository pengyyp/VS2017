#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	cout << "myhub����"<<endl;
	string str = "my string";
	int a[3][2] = {0,1,2,3,4,5};
	int* p = a[0];
	cout << a[0][5] << endl;
	printf("%d\n",p[5]);
	cout << "short ���ֽ�����"<<sizeof(short)<<endl;
	//��ά��������
	int **x = new int* [10];
	//��ʼ��
	for (int i = 0; i < 10; i++) {
		x[i] = new int[10];
	}
	//ע��
	for (int i = 0; i < 10; i++) {
		delete[]x[i];
	}
	delete[]x;
	system("pause");
	return 1;
}