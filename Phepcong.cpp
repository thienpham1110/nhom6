#include<iostream>
using namespace std;

int tong2SoRandom()
{
	int a = rand() % 100;
	int b = rand() % 100;
	int c = a + b;
	return c;
}

int main()
{
	
	int n;
	cout << "Du doan ket qua:";
	cin >> n;
	if (n != tong2SoRandom())
	{
		cout << "Sai ket qua ! Tong 2 so la:"<<tong2SoRandom;
		
	}
	else
	{
		cout << "Ket qua dung ! Tong 2 so la:" <<tong2SoRandom;
	}
	system("pause");
}