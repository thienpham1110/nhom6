#include <iostream>

using namespace std;

int tong(int a, int b){
return(a+b);
};
int hieu(int a, int b);
<<<<<<< HEAD
float thuong(int a, int b);
int tich(int a, int b)
{
	int s=a*b;
	return s;
}
=======
int tich(int a, int b);
float thuong(int a, int b);
>>>>>>> 156b1814cb8940ea17fc7e2889a90fdfe448fd54
int main()
{

	int a,b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"\nnhap a:";
	cin>>a;
	cout<<"\nnhap b:";
	cin>>b;
	cout<< "tong cua a va b la: "<<tong(a,b)<<endl;


	system("pause");
	return 0;
}
