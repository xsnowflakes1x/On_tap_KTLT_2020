#include<iostream>
#include<conio.h>
using namespace std;
/*
Nhập 2 số. xuất tổng, hiệu, tích, thương
Sử dụng pp lập trình thủ tục
*/
void TinhTongHieuTichThuong();
void main()
{
	TinhTongHieuTichThuong();
	_getch();
}
void TinhTongHieuTichThuong()
{
	int Tong, Hieu, Tich, Thuong;
	cout << "Nhap a: ";
	int a; cin >> a;
	cout << "Nhap b:";
	int b; cin >> b;
	if (a > b)
		Hieu = a - b;
	else
		Hieu = b - a;
	Tong = a + b;
	Tich = a* b;
	Thuong = a / b;
	cout << "Tong: " << Tong << endl;
	cout << "Hieu: " << Hieu << endl;
	cout << "Tich: " << Tich << endl;
	cout << "Thuong: " << Thuong << endl;
}	
