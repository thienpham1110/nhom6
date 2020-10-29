#include <iostream>
#include <stdio.h>
using namespace std;

int hieu2SoRandom(int &a, int &b)
{
	 a= (rand() % 100);
	 b = (rand() % 100);
	int c = a - b;
	return c;
}

int main()
{
	
	int a = 0; int b= 0;
	int hieu = hieu2SoRandom(a, b);
	cout << "So a la: " << a;
	cout << "So b la: " << b;
	int n;
	cout << "Du doan ket qua?: ";
	cin >> n;
	if (n != hieu)
	{
		cout << "Sai ket qua! Hieu 2 so la: " << hieu;
	}
	else cout << "Ket qua dung! Hieu 2 so la: " << hieu;


	system("pause");
	return 0;
}
