#include <iostream>

using namespace std;

int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b)
float thuong(int a, int b) {
	return a/b;
}
int main()
{

	int a,b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"\nnhap a:";
	cin>>a;
	cout<<"\nnhap b:";
	cin>>b;
	cout<< "thuong cua a va b la: "<<thuong(a,b)<<endl;


	system("pause");
	return 0;
}
