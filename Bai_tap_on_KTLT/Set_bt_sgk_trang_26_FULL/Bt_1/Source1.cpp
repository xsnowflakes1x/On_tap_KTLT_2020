#include<iostream>
#include<conio.h>
using namespace std;
/*
nhập vào số lượng, đơn giá. Tính thành tiền và thếu VAT 10% của thành tiền
Sử dụng pp lập trình thủ tục
*/
void TinhThanhTien();
void main()
{
	TinhThanhTien();
	_getch();
}

void TinhThanhTien()
{
	int sl, dg;
	cout << "Nhap sl: ";
	cin >> sl;
	cout << endl;
	cout << "Nhap don gia: ";
	cin >> dg;
	int TongTien = 0, Vat;
	TongTien = sl * dg;
	Vat = (TongTien * 0.1);
	TongTien += Vat;
	cout << "Thue VAT 10%: "<<Vat << endl;
	cout << "Nhap don gia: " << TongTien;
}

