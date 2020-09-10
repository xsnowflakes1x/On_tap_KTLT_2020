#include<iostream>
#include<conio.h>
using namespace std;
/*
Nhập một số nguyên gồm 4 chữ số. Xuất ra số nguyên với hai chữ số đảo ngược (Vd: nhập 47-->74)
Sử dụng pp lập trình thủ tục
*/
void DaoNguocSo();
void main()
{
	DaoNguocSo();
	_getch();
}
void DaoNguocSo()
{
	cout << "Nhap so:";
	int x; 
	cin >> x;
	int Lay_hang_truc, Lay_hang_dv, Lay_hang_tram, Lay_hang_nghin;
	Lay_hang_nghin = x / 1000;
	Lay_hang_tram = x / 100 % 10;
	Lay_hang_truc = x % 1000 % 100 / 10;
	Lay_hang_dv = x % 1000 % 100 % 10;
	cout << "KQ: " << Lay_hang_dv << Lay_hang_truc<<Lay_hang_tram<<Lay_hang_nghin;
}
