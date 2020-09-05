#include<iostream>
#include<conio.h>
using namespace std;
/*
Viết chương trình tính giá trị của hàm số:
f(x) = 2x^2 + 5x + 9 khi x >= 5
f(x) = -2x^2 + 4x - 9 khi x < 5
*/
void TinhGiaTriHamSo();
void main()
{
	TinhGiaTriHamSo();
	_getch();
}
void TinhGiaTriHamSo()
{
	int x, kq;
	cout << "Nhap x: ";
	cin >> x;
	if (x < 5)
	{
		kq = -2 * pow(x, 2) + 5 * x - 9;
		cout << "Kq = " << kq;
	}
	else
	{
		kq = 2 * pow(x, 2) + 5 * x + 9;
		cout << "Kq = " << kq;
	}
}