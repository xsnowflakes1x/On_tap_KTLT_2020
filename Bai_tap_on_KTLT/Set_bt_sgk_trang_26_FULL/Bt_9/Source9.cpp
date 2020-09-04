#include<iostream>
#include<conio.h>
using namespace std;
/*
Nhập vào ba số. Tính trung bình cộng của ba số và xuất ra trung bình cộng.
*/
void TinhTrungBinhCong();
void main()
{
	TinhTrungBinhCong();
	_getch();
}
void TinhTrungBinhCong()
{
	float a = 0, b = 0, c = 0, TBC;
	cout << "Nhap vao 3 so: ";
	cin >> a >> b >> c;
	TBC = (a + b + c) / 3;
	cout << "TBC = " << TBC;
}
