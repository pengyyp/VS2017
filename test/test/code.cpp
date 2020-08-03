#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	cout << "myhub测试"<<endl;
	string str = "my string";
	int a[3][2] = {0,1,2,3,4,5};
	int* p = a[0];
	cout << a[0][5] << endl;
	printf("%d\n",p[5]);
	cout << "short 的字节数："<<sizeof(short)<<endl;
	//二维数组申明
	int **x = new int* [10];
	//初始化
	for (int i = 0; i < 10; i++) {
		x[i] = new int[10];
	}
	//注销
	for (int i = 0; i < 10; i++) {
		delete[]x[i];
	}
	delete[]x;
	system("pause");
	return 1;
}