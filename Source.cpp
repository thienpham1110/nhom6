#include <iostream>

using namespace std;

float tich(int a, int b) {
	return a*b;
}
float tong(int a, int b) {
	return a+b;
}
float hieu(int a, int b) {
	return a-b;
}
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
	cout<< "tong cua a va b la: "<<tong(a,b)<<endl;
	cout<< "hieu cua a va b la: "<<hieu(a,b)<<endl;
	cout<< "tich cua a va b la: "<<tich(a,b)<<endl;
	cout<< "thuong cua a va b la: "<<thuong(a,b)<<endl;
	system("pause");
	return 0;
}

