#include <iostream>

using namespace std;

float dienTichhinhTron(int r)
{
	float GT_PI = 3.14, dt;
	return dt=GT_PI*r*r;
}
float dienTichVuong(canh a){
	return a*a;
}float dienTichHinhChuNhat(int a, int b)
{
	return (a*b);
}
int main()
{

	int a;
	cout << "Dien tich hinh vuong: ";
	cout<<"\nnhap a:";
	cin>>a;
	cout<< "Dien tich hinh vuong canh a:  "<<dienTichVuong(a)<<endl;
	
	int a,back;
	cout << "Dien tich hinh chu nhat: ";
	cout<<"\nnhap a:";
	cin>>a;
	cout<<"\nnhap b:";
	cin>>back;
	cout<< "Dien tich hinh chu nhat canh a va b la :  "<<dienTichHinhChuNhat(a,b)<<endl;
	
	int r;
	cout << "Dien tich hinh tron: ";
	cout<<"\nnhap r:";
	cin>>a;
	cout<< "Dien tich hinh trong ch vi r la : "<<dienTichhinhTron(r)<<endl;
	system("pause");
	
	return 0;
}
