#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	int a, int b;
	cout<<"Nhập số a: ";
	cin>>a;
	cout<<"Nhập số b: ";
	cin>>b;
	cout<<"Tổng 2 số là: " + tong(a,b);
	cout<<"Hiệu 2 số là: " + hieu(a,b);
	cout<<"tích 2 số là: " + tich(a,b);
	cout<<"Thương 2 số là: " + thuong(a,b);
	system("pause");
	return 0;
}
float thuong(int a, int b)
{
		return a/b;
}