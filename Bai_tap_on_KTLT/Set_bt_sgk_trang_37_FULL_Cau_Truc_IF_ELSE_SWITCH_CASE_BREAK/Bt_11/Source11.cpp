#include<iostream>
#include<conio.h>
using namespace std;
/*
Nhập vào một trong các số nguyên từ 1 đến 4 để lựa chọn 1 trong các công việc sau:
1. Tính diện tích hình tròn.
2. Tính diện tích hình tam giác.
3. Tinh diện tích hình chữ nhật.
4. Tính diện tích hình vuông
*/
void TinhDienTichHinhTron();
void TinhDienTichHinhVuong();
void TinhDienTichHinhChuNhat();
void ChonDeTinhDienTich();
void TinhDienTichHinhTamGiacThuong();
void main()
{
	int x;
	do
	{
		ChonDeTinhDienTich();
		cout << "\nNhap 00 de thoat!";
		cin >> x;
	} while (x != 00);
	_getch();
}
void ChonDeTinhDienTich()
{
	int a;
	cout << "Bat dau chuong trinh: " << endl;
	cout << "Chon tu 1- 4 de thuc hien chuong trinh: " << endl;
	cout << "1. Tinh dien tich hinh tron." << endl;
	cout << "2. Tinh dien tich hinh tam giac thuong." << endl;
	cout << "3. Tinh dien tich hinh chu nhat." << endl;
	cout << "4. Tinh dien tich hinh vuong." << endl;
	cin >> a;
	switch (a) 
	{
		case 1: TinhDienTichHinhTron(); break;
		case 2:TinhDienTichHinhTamGiacThuong(); break;
		case 3:TinhDienTichHinhChuNhat(); break;
		case 4:TinhDienTichHinhVuong(); break;
	}
}
void TinhDienTichHinhTron()
{
	float r = 0;
	cout << "\nNhap vao ban kinh: ";
	cin >> r;
	cout << "\nS hinh tron = " << r * 3.14 << endl;
}
void TinhDienTichHinhVuong()
{
	int a;
	cout << "\nNhap vao canh a: ";
	cin >> a;
	cout << "\nS hinh vuong = " << a * a << endl;
}
void TinhDienTichHinhChuNhat()
{
	int a, b;
	cout << "\nNhap vao chieu dai: ";
	cin >> a;
	cout << "\nNhap vao chieu rong: ";
	cin >> b;
	cout << "\nS hinh chu nhat = " << a * b << endl;
}
void TinhDienTichHinhTamGiacThuong()
{
	float  a = 0,h;
	cout << "\nNhap vao day: " ;
	cin >> a;
	cout << "\nNhap vao chieu cao: ";
	cin >> h;
	cout << "S tam giac thuong = " << (a * h) / 2 << endl;
}