#include<iostream>
#include<conio.h>
using namespace std;
/*
Nhập 1 số nguyên có 3 chữ số. Tính tổng các chữ số và xuất ra
*/
int TinhTong3SoNguyen(int a);
void Nhap();
void main()
{
	system("cls");
	Nhap();
	_getch();
}
void Nhap()
{
	do 
	{
		int x = 0;
		int a = 0;
		cout << "Nhap a: ";
		cin >> a;
		if (a > 100 && a < 1000)
		{
			int T;
			T = TinhTong3SoNguyen(a);
			cout << "Tong so nguyen co 3 chu so cong lai la: " << T;
		}
		else
		{
			cout << "Khong hop le!";
			cout << "\nMoi ban nhap lai"<<endl;
			system("pause");
			main();
		}
		cout << "\nBam 1 de thoat"; 
		cin >> x;
		if (x == 1)
			exit(1);
	} 
	while (true);
}
int TinhTong3SoNguyen(int a)
{
	int Lay_hang_tram, Lay_hang_chuc, Lay_hang_dv;
	Lay_hang_tram = a / 100;
	Lay_hang_chuc = a / 10 % 10;
	Lay_hang_dv = a % 100 % 10;
	int Tong; 
	Tong = Lay_hang_dv + Lay_hang_chuc + Lay_hang_tram;
	return Tong;
}